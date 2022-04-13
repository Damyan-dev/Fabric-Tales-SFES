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

       var itemToBuy = Inventory.Instance.FindItemByType("Cotton Seed");
        
        if (ingameCamera.GetComponent<playerMoney>().money >= 10 && itemToBuy.itemType != null)
        {
            Inventory.Instance.AddItem(itemToBuy.itemType, 1);
            Debug.Log("Added seed");
            ingameCamera.GetComponent<playerMoney>().subtractMoney(10);
        }
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
        var itemToSell = Inventory.Instance.FindItemByType("Cotton Shirt");

        if (itemToSell.itemType != null && itemToSell.quantity > 0)
        {
            Inventory.Instance.RemoveItem(itemToSell.itemType, 1);
            Debug.Log("removed shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(30);
        }
    }
    public void Add20()
    {
        var itemToSell3 = Inventory.Instance.FindItemByType("Washed Wool");

        if (itemToSell3.itemType != null && itemToSell3.quantity > 0)
        {
            Inventory.Instance.RemoveItem(itemToSell3.itemType, 1);
            Debug.Log("removed WW");
            ingameCamera.GetComponent<playerMoney>().addMoney(20);
        }
    }
    public void Add50()
    {
        var itemToSell2 = Inventory.Instance.FindItemByType("Red Cotton Shirt");

        if (itemToSell2.itemType != null && itemToSell2.quantity > 0)
        {
            Inventory.Instance.RemoveItem(itemToSell2.itemType, 1);
            Debug.Log("removed red shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(50);
        }
    }
    public void Add75()
    {
        var itemToSell4 = Inventory.Instance.FindItemByType("Yellow Cotton Shirt");

        if (itemToSell4.itemType != null && itemToSell4.quantity > 0)
        {
            Inventory.Instance.RemoveItem(itemToSell4.itemType, 1);
            Debug.Log("removed yellow shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(50);
        }
    }
}
