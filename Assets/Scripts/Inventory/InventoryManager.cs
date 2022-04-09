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
<<<<<<< HEAD


    public GameObject[] inventory = new GameObject[25];


    //[SerializeField] 
    //private ItemSlotData[] toolSlots = new ItemSlotData[8];
    [SerializeField] 
    private ItemSlotData[] itemSlots = new ItemSlotData[8];
    //[SerializeField] 
    //private ItemSlotData equippedToolSlot = null;
    //[SerializeField] 
    private ItemSlotData invSlot = null;

=======
   
    public ItemData[] tools = new ItemData[12];
    public ItemData[] items = new ItemData[12];
    public ItemData equippedTool = null;
    public ItemData equippedItem = null;
    
    [SerializeField]
    public Transform handPoint = null;
>>>>>>> parent of 947ca393 (Reworked inventory system to accommodate stackable items. Fixed sun lighting to now go from East to West.)

    public void AddItem(GameObject item)
    {
        bool itemAdded = false;

        for (int i = 0; i < inventory.Length; i++)
        {
            if((inventory[i]) == null)
            {
                inventory[i] = item;
                Debug.Log(item.name + " was added");
                break;
            }
        }

        if (!itemAdded)
        {
            Debug.Log("inventory is full - item not added");
        }

    }

   /* public void InventoryToEquipped(int invSlotIndex, InventorySlot.InventoryCategory inventoryCategory)
    {
        if (inventoryCategory == InventorySlot.InventoryCategory.Items)
        {
            ItemData itemToEquip = items[invSlotIndex];
            items[invSlotIndex] = equippedItem;
            equippedItem = itemToEquip;
        }
        else
        {
<<<<<<< HEAD
            ItemSlotData slotToEquip = new ItemSlotData(inventoryToChange[invSlotIndex]);
            // Change inventory slot to equipped slot
            inventoryToChange[invSlotIndex] = new ItemSlotData(equippedToInv);
            // Change the equipped slot to the inventory slot
           // EquipHandSlot(slotToEquip);
=======
            ItemData toolToEquip = tools[invSlotIndex];
            tools[invSlotIndex] = equippedTool;
            equippedTool = toolToEquip;
>>>>>>> parent of 947ca393 (Reworked inventory system to accommodate stackable items. Fixed sun lighting to now go from East to West.)
        }
        UIController.Instance.DisplayInventory();
<<<<<<< HEAD
    } */

    public void ItemRemove(ItemSlotData itemToRemove)
=======
    }
    public void ItemRemove(ItemData itemToRemove)
>>>>>>> parent of 947ca393 (Reworked inventory system to accommodate stackable items. Fixed sun lighting to now go from East to West.)
    {
        for (int i = 0; i < items.Length; i++)
        {
            if (items[i] == itemToRemove)
            {
                items[i] = null;
                return;
            }
        }
    }
    public void ItemAdd(ItemData itemToAdd)
    {
        for (int i = 0; i < items.Length; i++)
        {
            if (items[i] == null)
            {
                items[i] = itemToAdd;
                return;
            }
        }
    }
    public ItemData ItemSearch(string itemName)
    {
        for (int i = 0; i < items.Length; i++)
        {
            if (items[i] != null)
            {
               if (items[i].name == itemName)
                {
                    return items[i];
                }
            }
        }
        return null;
    }

    public void EquippedToInventory(InventorySlot.InventoryCategory inventoryCategory)
    {
<<<<<<< HEAD
        ItemSlotData inventorySlot = invSlot;
        ItemSlotData[] inventoryToChange = itemSlots;

        if (inventoryCategory == InventorySlot.InventoryCategory.Items)
        {
            //equippedSlot = equippedItemSlot;
            inventoryToChange = itemSlots;
        }

        if (StackItemToInv(inventorySlot, inventoryToChange))
        {
            for (int i = 0; inventoryToChange.Length != 0; i++)
=======
        if (inventoryCategory == InventorySlot.InventoryCategory.Items)
        {
            for (int i = 0; items.Length != 0; i++)
>>>>>>> parent of 947ca393 (Reworked inventory system to accommodate stackable items. Fixed sun lighting to now go from East to West.)
            {
                if (items[i] == null)
                {
<<<<<<< HEAD
                    inventoryToChange[i] = new ItemSlotData(invSlot);
                    invSlot.EmptyQuantity();
=======
                    items[i] = equippedItem;
                    equippedItem = null;
>>>>>>> parent of 947ca393 (Reworked inventory system to accommodate stackable items. Fixed sun lighting to now go from East to West.)
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < tools.Length; )
            {
                tools[i] = equippedTool;
                equippedTool = null;
                break;
            }
        }
<<<<<<< HEAD
        return false;
    }

    public ItemData GetEquippedSlotItem(InventorySlot.InventoryCategory inventoryType)
    {
        if (inventoryType == InventorySlot.InventoryCategory.Items)
        {
            return invSlot.itemData;
        }
        return invSlot.itemData;
    }


    public ItemSlotData GetEquippedSlot(InventorySlot.InventoryCategory inventoryType)
    {
        if (inventoryType == InventorySlot.InventoryCategory.Items)
        {
            return invSlot;
        }
        return invSlot;
    }

    public ItemSlotData[] GetInventorySlots(InventorySlot.InventoryCategory inventoryType)
    {
        if (inventoryType == InventorySlot.InventoryCategory.Items)
        {
            return itemSlots;
        }
        return itemSlots;
    }

    public bool SlotEquipped(InventorySlot.InventoryCategory inventoryType)
    {
        if (inventoryType == InventorySlot.InventoryCategory.Items)
        {
            return !invSlot.IsEmpty();
        }
        return !invSlot.IsEmpty();
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
            invSlot = new ItemSlotData(item);
        }
        /*else
        {
            equippedItemSlot = new ItemSlotData(item);
        }*/
    }
    public void EquipHandSlot(ItemSlotData itemSlot)
    {
        ItemData item = itemSlot.itemData;

        if (IsTool(item))
        {
            invSlot = new ItemSlotData(itemSlot);
        }
        /*else
        {
            equippedItemSlot = new ItemSlotData(itemSlot);
        }*/
    }

    private void OnValidate()
    {
        //ValidateInventorySlots(equippedToolSlot);
        ValidateInventorySlots(invSlot);
        ValidateInventorySlots(itemSlots);
        //ValidateInventorySlots(toolSlots);
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
=======
        UIController.Instance.DisplayInventory();
>>>>>>> parent of 947ca393 (Reworked inventory system to accommodate stackable items. Fixed sun lighting to now go from East to West.)
    }
 
}


