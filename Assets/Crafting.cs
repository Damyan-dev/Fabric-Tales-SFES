using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Crafting : MonoBehaviour
{
    public InteractableObject WMitemToCraft;
    public InteractableObject WMitemToUse;


    public void WashedCottonCraft()
    {
        
        if (Inventory.Instance.FindItemByType("Cotton"))
        {
            Inventory.Instance.RemoveItem(WMitemToUse);
            Inventory.Instance.AddItem(WMitemToCraft);
        }
    }

    public void FabricCraft()
    {

        if (Inventory.Instance.FindItemByType("Washed Cotton"))
        {
         //   Inventory.Instance.RemoveItem(itemToUse);
         //   Inventory.Instance.AddItem(itemToCraft);
        }
    }

    public void InorganicFabricCraft()
    {

        if (Inventory.Instance.FindItemByType("Polyester"))
        {
         //   Inventory.Instance.RemoveItem(itemToUse);
         //   Inventory.Instance.AddItem(itemToCraft);
        }
    }
}
