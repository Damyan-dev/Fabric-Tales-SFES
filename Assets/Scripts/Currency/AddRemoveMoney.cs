using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddRemoveMoney : MonoBehaviour
{

    public GameObject ingameCamera;
    public Interactor playerInteractor;
  
    public void BuyCottonSeed()
    {
       var itemToBuy = Inventory.Instance.FindItemByType("Cotton Seed");
        
        if (ingameCamera.GetComponent<playerMoney>().money >= 10 && itemToBuy.itemType != null && itemToBuy.inventory && itemToBuy.quantity >= 0)
        {
            Inventory.Instance.AddItem(itemToBuy.itemType, 1);
            ingameCamera.GetComponent<playerMoney>().subtractMoney(10);
        }
    }

    public void BuyElderberrySeed()
    {
        var itemToBuy = Inventory.Instance.FindItemByType("Elderberry Seed");

        if (ingameCamera.GetComponent<playerMoney>().money >= 10 && itemToBuy.itemType != null && itemToBuy.inventory && itemToBuy.quantity >= 0)
        {
            Inventory.Instance.AddItem(itemToBuy.itemType, 1);
            ingameCamera.GetComponent<playerMoney>().subtractMoney(10);
        }
    }

    public void BuyTurmericSeed()
    {
        var itemToBuy = Inventory.Instance.FindItemByType("Turmeric Seed");

        if (ingameCamera.GetComponent<playerMoney>().money >= 10 && itemToBuy.itemType != null && itemToBuy.inventory && itemToBuy.quantity >= 0)
        {
            Inventory.Instance.AddItem(itemToBuy.itemType, 1);        
            ingameCamera.GetComponent<playerMoney>().subtractMoney(10);
        }
    }

    public void BuyPolyester()
    {
        var itemToBuy = Inventory.Instance.FindItemByType("Polyester");

        if (ingameCamera.GetComponent<playerMoney>().money >= 25 && itemToBuy.itemType != null && itemToBuy.inventory && itemToBuy.quantity >= 0)
        {
            Inventory.Instance.AddItem(itemToBuy.itemType, 1);
            ingameCamera.GetComponent<playerMoney>().subtractMoney(25);
        }
    }
    public void Subtract100()
    {
        ingameCamera.GetComponent<playerMoney>().subtractMoney(100);
    }
    public void Add30()
    {
        var itemToSell = Inventory.Instance.FindItemByType("Cotton Shirt");

        if (itemToSell.itemType != null && itemToSell.quantity >= 1)
        {
            Inventory.Instance.RemoveItem(itemToSell.itemType, 1);
            Debug.Log("removed shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(30);
        }
    }
    public void BuyCotton()
    {
        var itemToBuy = Inventory.Instance.FindItemByType("Cotton");

        if (itemToBuy.itemType != null && itemToBuy.quantity >= 0)
        {
            Inventory.Instance.RemoveItem(itemToBuy.itemType, 1);
            Debug.Log("Bought Cotton");
            ingameCamera.GetComponent<playerMoney>().subtractMoney(30);
        }
    }
    public void SellRCottonShirt()
    {
        var itemToSell2 = Inventory.Instance.FindItemByType("Red Cotton Shirt");

        if (itemToSell2.itemType != null && itemToSell2.quantity >= 1)
        {
            Inventory.Instance.RemoveItem(itemToSell2.itemType, 1);
            Debug.Log("removed red shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(50);
        }
    }
    public void SellWool()
    {
        var itemToSell = Inventory.Instance.FindItemByType("Wool");

        if (itemToSell.itemType != null && itemToSell.quantity >= 1)
        {
            Inventory.Instance.RemoveItem(itemToSell.itemType, 1);
            Debug.Log("removed Wool");
            ingameCamera.GetComponent<playerMoney>().addMoney(10);
        }
    }
    public void SellYCottonShirt()
    {
        var itemToSell4 = Inventory.Instance.FindItemByType("Yellow Cotton Shirt");

        if (itemToSell4.itemType != null && itemToSell4.quantity >= 1)
        {
            Inventory.Instance.RemoveItem(itemToSell4.itemType, 1);
            Debug.Log("removed yellow shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(50);
        }
    }
}
