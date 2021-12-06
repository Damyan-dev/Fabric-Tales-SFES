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
        }
    }
   
    public ItemData[] tools = new ItemData[8];
    public ItemData[] items = new ItemData[8];
    public ItemData equippedTool = null;
    public ItemData equippedItem = null;

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
            for (int i = 0; i < tools.Length; i++)
            {
                tools[i] = equippedTool;
                equippedTool = null;
                break;
            }
        }
        UIController.Instance.DisplayInventory();
    }

}


