using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddRemoveMoney : MonoBehaviour
{

    public GameObject ingameCamera;
    public Interactor playerInteractor;
  
    public void Subtract10()
    {
        // ItemSlotData item = InventoryManager.Instance.("Cotton Seeds");
        // playerInteractor.ItemPickup();

       var itemToBuy = Inventory.Instance.FindItemByType("");
            ingameCamera.GetComponent<playerMoney>().subtractMoney(10);
       
    }

    public void Subtract25()
    {
        ingameCamera.GetComponent<playerMoney>().subtractMoney(25);
    }
    public void Subtract100()
    {
        ingameCamera.GetComponent<playerMoney>().subtractMoney(100);
    }
    public void Add30()
    {
        InteractableObject item = Inventory.Instance.FindItemByType("Rare Shirt");
        if (item != null)
        {
            Inventory.Instance.RemoveItem(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(30);
        }
    }
    public void Add20()
    {
      //  ItemSlotData item = InventoryManager.Instance.ItemSearch("Washed Wool");
       // if (item != null)
       // {
       //     InventoryManager.Instance.ItemRemove(item);   
       // }

        ingameCamera.GetComponent<playerMoney>().addMoney(20);
    }
    public void Add50()
    {
        InteractableObject item = Inventory.Instance.FindItemByType("Red Dyed shirt");
        if (item != null)
        {
            Inventory.Instance.RemoveItem(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(50);
        }
    }
    public void Add75()
    {
        InteractableObject item = Inventory.Instance.FindItemByType("Yellow Dyed Shirt");
        if (item != null)
        {
            Inventory.Instance.RemoveItem(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(75);
        }
    }

    
}
