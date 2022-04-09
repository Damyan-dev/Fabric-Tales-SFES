using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class ItemSlotData
{
    public ItemData itemData;
    public string itemName;
    public int quantity;


    // Class Constructor
    public ItemSlotData (ItemData itemData, int quantity, string itemName)
    {
        this.itemData = itemData;
        this.quantity = quantity;
        this.itemName = itemName;
        CheckQuantity();
    }

    // Constructs the class and sets the item data quantity to 1
    public ItemSlotData (ItemData itemData)
    {
        this.itemData = itemData;
        quantity = 1;
        CheckQuantity();
    }

    public ItemSlotData (ItemSlotData slotToClone)
    {
        itemData = slotToClone.itemData;
        quantity = slotToClone.quantity;
    }

    public void AddQuantity()
    {
        AddQuantity(1);
    }

    public void AddQuantity(int amountToAdd)
    {
        quantity += amountToAdd;
    }

    public void RemoveQuantity()
    {
        quantity--;
        CheckQuantity();
    }

    public bool Stackable(ItemSlotData slotToCompare)
    {
        return slotToCompare.itemData == itemData;
    }

    private void CheckQuantity()
    {
        if (quantity <= 0 || itemData == null)
        {
            EmptyQuantity();
        }
    }

    public void EmptyQuantity()
    {
        itemData = null;
        quantity = 0;
    }

    public bool IsEmpty()
    {
        return itemData == null;
    }

}
