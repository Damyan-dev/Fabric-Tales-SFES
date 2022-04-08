using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryManager : MonoBehaviour
{
    public static InventoryManager Instance { get; private set; }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
            DontDestroyOnLoad(this);
        }
    }

    [SerializeField] 
    private ItemSlotData[] toolSlots = new ItemSlotData[12];
    [SerializeField] 
    private ItemSlotData[] itemSlots = new ItemSlotData[12];
    [SerializeField] 
    private ItemSlotData equippedToolSlot = null;
    [SerializeField] 
    private ItemSlotData equippedItemSlot = null;


    public void InventoryToEquipped(int invSlotIndex, InventorySlot.InventoryCategory inventoryCategory)
    {
        ItemSlotData equippedToInv = equippedToolSlot;
        ItemSlotData[] inventoryToChange = toolSlots;

        if (inventoryCategory == InventorySlot.InventoryCategory.Items)
        {
            equippedToInv = equippedItemSlot;
            inventoryToChange = itemSlots;
        }

        if (equippedToInv.Stackable(inventoryToChange[invSlotIndex]))
        {
            ItemSlotData slotToChange = inventoryToChange[invSlotIndex];
            equippedToInv.AddQuantity(slotToChange.quantity);
            slotToChange.EmptyQuantity();
        }
        else
        {
            ItemSlotData slotToEquip = new ItemSlotData(inventoryToChange[invSlotIndex]);
            // Change inventory slot to equipped slot
            inventoryToChange[invSlotIndex] = new ItemSlotData(equippedToInv);
            // Change the equipped slot to the inventory slot
           // EquipHandSlot(slotToEquip);
        }

        UIController.Instance.DisplayInventory();
    }

    public void ItemRemove(ItemSlotData itemToRemove)
    {
        for (int i = 0; i < itemSlots.Length; i++)
        {
            if (itemSlots[i] == itemToRemove)
            {
                itemSlots[i] = null;
                return;
            }
        }
        
    }
    public void ItemAdd(ItemSlotData itemToAdd)
    {
        
        for (int i = 0; i < itemSlots.Length; i++)
        {
            if (itemSlots[i] == null)
            {
                itemSlots[i] = itemToAdd;
                return;
            }
        }
        
    }
    public ItemSlotData ItemSearch(string itemName)
    {
        
        for (int i = 0; i < itemSlots.Length; i++)
        {
            if (itemSlots[i] != null)
            {
               if (itemSlots[i].itemName == itemName)
                {
                    return itemSlots[i];
                }
            }
        }
        return null;
        
    }

    public void EquippedToInventory(InventorySlot.InventoryCategory inventoryCategory)
    {
        ItemSlotData equippedSlot = equippedToolSlot;
        ItemSlotData[] inventoryToChange = toolSlots;

        if (inventoryCategory == InventorySlot.InventoryCategory.Items)
        {
            equippedSlot = equippedItemSlot;
            inventoryToChange = itemSlots;
        }

        if (StackItemToInv(equippedSlot, inventoryToChange))
        {
            for (int i = 0; inventoryToChange.Length != 0; i++)
            {
                if (inventoryToChange[i].IsEmpty())
                {
                    inventoryToChange[i] = new ItemSlotData(equippedSlot);
                    equippedSlot.EmptyQuantity();
                    break;
                }
            }
        }

        UIController.Instance.DisplayInventory();

    }

    public void ConsumeItem(ItemSlotData itemSlot)
    {
        if (itemSlot.IsEmpty())
        {
            Debug.LogError("There is nothing to use.");
            return;
        }
        
        itemSlot.RemoveQuantity();
        UIController.Instance.DisplayInventory();
    }

    public bool StackItemToInv(ItemSlotData itemSlot, ItemSlotData[] invArray)
    {
        for (int i = 0; i < invArray.Length; i++)
        {
            if (invArray[i].Stackable(itemSlot))
            {
                invArray[i].AddQuantity(itemSlot.quantity);
                itemSlot.EmptyQuantity();
                return true;
            }
        }
        return false;
    }

    public ItemData GetEquippedSlotItem(InventorySlot.InventoryCategory inventoryType)
    {
        if (inventoryType == InventorySlot.InventoryCategory.Items)
        {
            return equippedItemSlot.itemData;
        }
        return equippedToolSlot.itemData;
    }


    public ItemSlotData GetEquippedSlot(InventorySlot.InventoryCategory inventoryType)
    {
        if (inventoryType == InventorySlot.InventoryCategory.Items)
        {
            return equippedItemSlot;
        }
        return equippedToolSlot;
    }

    public ItemSlotData[] GetInventorySlots(InventorySlot.InventoryCategory inventoryType)
    {
        if (inventoryType == InventorySlot.InventoryCategory.Items)
        {
            return itemSlots;
        }
        return toolSlots;
    }

    public bool SlotEquipped(InventorySlot.InventoryCategory inventoryType)
    {
        if (inventoryType == InventorySlot.InventoryCategory.Items)
        {
            return !equippedItemSlot.IsEmpty();
        }
        return !equippedToolSlot.IsEmpty();
    }

    public bool IsTool(ItemData item)
    {
        ItemEquipment equipment = item as ItemEquipment;
        if (equipment != null)
        {
            return true;
        }

        SeedData seed = item as SeedData;
        return seed != null;
    }

    public void EquipHandSlot(ItemData item)
    {
        if (IsTool(item))
        {
            equippedToolSlot = new ItemSlotData(item);
        }
        else
        {
            equippedItemSlot = new ItemSlotData(item);
        }
    }
    public void EquipHandSlot(ItemSlotData itemSlot)
    {
        ItemData item = itemSlot.itemData;

        if (IsTool(item))
        {
            equippedToolSlot = new ItemSlotData(itemSlot);
        }
        else
        {
            equippedItemSlot = new ItemSlotData(itemSlot);
        }
    }

    private void OnValidate()
    {
        ValidateInventorySlots(equippedToolSlot);
        ValidateInventorySlots(equippedItemSlot);
        ValidateInventorySlots(itemSlots);
        ValidateInventorySlots(toolSlots);
    }

    void ValidateInventorySlots(ItemSlotData slot)
    {
        if (slot.itemData != null && slot.quantity == 0)
        {
            slot.quantity = 1;
        }
    }

    void ValidateInventorySlots(ItemSlotData[] array)
    {
        foreach (ItemSlotData slot in array)
        {
            ValidateInventorySlots(slot);
        }
    }
}


