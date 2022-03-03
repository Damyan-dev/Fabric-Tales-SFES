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
   
    public ItemData[] tools = new ItemData[8];
    public ItemData[] items = new ItemData[8];
    public ItemData equippedTool = null;
    public ItemData equippedItem = null;
    
    [SerializeField]
    public Transform handPoint = null;

    public void InventoryToEquipped(int invSlotIndex, InventorySlot.InventoryCategory inventoryCategory)
    {
        if (inventoryCategory == InventorySlot.InventoryCategory.Items)
        {
            (items[invSlotIndex], equippedItem) = (equippedItem, items[invSlotIndex]);
        }
        else
        {
            (tools[invSlotIndex], equippedTool) = (equippedTool, tools[invSlotIndex]);
        }
        UIController.Instance.DisplayInventory();
    }
    public void ItemRemove(ItemData itemToRemove)
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
        if (inventoryCategory == InventorySlot.InventoryCategory.Items)
        {
            for (int i = 0; items.Length != 0; i++)
            {
                if (items[i] == null)
                {
                    items[i] = equippedItem;
                    equippedItem = null;
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
        UIController.Instance.DisplayInventory();
    }
    

}


