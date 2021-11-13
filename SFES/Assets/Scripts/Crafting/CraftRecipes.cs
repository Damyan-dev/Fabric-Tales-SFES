using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.Progress;

[Serializable]
public struct ItemNumber
{
    public Item Item;
    [Range(1, 999)]
    public int Number;
}

[CreateAssetMenu]
public class CraftRecipes : ScriptableObject
{
    public List<ItemNumber> Materials;
    public List<ItemNumber> Outcome;
    
    public bool CanCraft(IItemContainer itemContainer)
    {
        foreach(ItemNumber itemNumber in Materials)
        {
            if(itemContainer.ItemCount(itemNumber.Item) < itemNumber.Number)
            {
                return false;
            }
        }
        return true;
    }

    public void Crafting(IItemContainer itemContainer)
    {
        if (CanCraft(itemContainer))
        {
            foreach(ItemNumber itemNumber in Materials)
            {
                for(int i = 0; i < itemNumber.Number; i++)
                {
                    itemContainer.RemoveItem(itemNumber.Item);
                }
            }
            foreach (ItemNumber itemNumber in Outcome)
            {
                for (int i = 0; i < itemNumber.Number; i++)
                {
                    itemContainer.AddItem(itemNumber.Item);
                }
            }
        }
    }
}
