using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddRemoveMoney : MonoBehaviour
{

    public GameObject ingameCamera;
    public Interactor playerInteractor;
    private AudioController audioController;

    public void Start()
    {
        audioController = GameObject.Find("GameManager").GetComponent<AudioController>();
    }

    public void BuyCottonSeed()
    {
       var itemToBuy = Inventory.Instance.FindItemByType("Cotton Seed");
        
        if (ingameCamera.GetComponent<playerMoney>().money >= 10 && itemToBuy.itemType != null && itemToBuy.inventory && itemToBuy.quantity >= 0)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.AddItem(itemToBuy.itemType, 1);
            ingameCamera.GetComponent<playerMoney>().subtractMoney(5);
        }
    }

    public void BuyElderberrySeed()
    {
        var itemToBuy = Inventory.Instance.FindItemByType("Elderberry Seed");

        if (ingameCamera.GetComponent<playerMoney>().money >= 10 && itemToBuy.itemType != null && itemToBuy.inventory && itemToBuy.quantity >= 0)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.AddItem(itemToBuy.itemType, 1);
            ingameCamera.GetComponent<playerMoney>().subtractMoney(10);
        }
    }

    public void BuyTurmericSeed()
    {
        var itemToBuy = Inventory.Instance.FindItemByType("Turmeric Seed");

        if (ingameCamera.GetComponent<playerMoney>().money >= 10 && itemToBuy.itemType != null && itemToBuy.inventory && itemToBuy.quantity >= 0)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.AddItem(itemToBuy.itemType, 1);        
            ingameCamera.GetComponent<playerMoney>().subtractMoney(10);
        }
    }

    public void BuyPolyester()
    {
        var itemToBuy = Inventory.Instance.FindItemByType("Polyester");

        if (ingameCamera.GetComponent<playerMoney>().money >= 25 && itemToBuy.itemType != null && itemToBuy.inventory && itemToBuy.quantity >= 0)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.AddItem(itemToBuy.itemType, 1);
            ingameCamera.GetComponent<playerMoney>().subtractMoney(5);
        }
    }
    public void Subtract100()
    {
        ingameCamera.GetComponent<playerMoney>().subtractMoney(100);
    }
    public void SellCottonShirt()
    {
        var itemToSell = Inventory.Instance.FindItemByType("Cotton Shirt");

        if (itemToSell.itemType != null && itemToSell.quantity >= 1)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.RemoveItem(itemToSell.itemType, 1);
            Debug.Log("removed shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(40);
        }
    }
    public void BuyCotton()
    {
        var itemToBuy = Inventory.Instance.FindItemByType("Cotton");

        if (itemToBuy.itemType != null && itemToBuy.quantity >= 0)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.RemoveItem(itemToBuy.itemType, 1);
            Debug.Log("Bought Cotton");
            ingameCamera.GetComponent<playerMoney>().subtractMoney(15);
        }
    }
    public void SellRCottonShirt()
    {
        var itemToSell2 = Inventory.Instance.FindItemByType("Red Cotton Shirt");

        if (itemToSell2.itemType != null && itemToSell2.quantity >= 1)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.RemoveItem(itemToSell2.itemType, 1);
            Debug.Log("removed red shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(60);
        }
    }
    public void SellWool()
    {
        var itemToSell = Inventory.Instance.FindItemByType("Wool");

        if (itemToSell.itemType != null && itemToSell.quantity >= 1)
        {
            audioController.PlaySoundComplete("Shop Button Click");
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
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.RemoveItem(itemToSell4.itemType, 1);
            Debug.Log("removed yellow shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(60);
        }
    }
    public void SellPolyShirt()
    {
        var itemToSell = Inventory.Instance.FindItemByType("Polyester Shirt");

        if (itemToSell.itemType != null && itemToSell.quantity >= 1)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.RemoveItem(itemToSell.itemType, 1);
            Debug.Log("removed shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(50);
        }
    }
    public void SellRPolyShirt()
    {
        var itemToSell2 = Inventory.Instance.FindItemByType("Red Polyester Shirt");

        if (itemToSell2.itemType != null && itemToSell2.quantity >= 1)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.RemoveItem(itemToSell2.itemType, 1);
            Debug.Log("removed red shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(70);
        }
    }
    public void SellYPolyShirt()
    {
        var itemToSell4 = Inventory.Instance.FindItemByType("Yellow Polyester Shirt");

        if (itemToSell4.itemType != null && itemToSell4.quantity >= 1)
        {
            audioController.PlaySoundComplete("Shop Button Click");
            Inventory.Instance.RemoveItem(itemToSell4.itemType, 1);
            Debug.Log("removed yellow shirt");
            ingameCamera.GetComponent<playerMoney>().addMoney(70);
        }
    }
}
