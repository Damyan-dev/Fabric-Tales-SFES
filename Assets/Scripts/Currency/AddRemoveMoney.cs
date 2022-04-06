using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddRemoveMoney : MonoBehaviour
{
    public GameObject ingameCamera;
    public GameObject canvasObject1;
    public GameObject canvasObject2;
    public GameObject MaterialsTab;
    public GameObject CropsTab;
    public GameObject FarmTab;
    public GameObject SeedTab;
    public GameObject ClothesTab;


    // Start is called before the first frame update
    void Start()
    {
       canvasObject1.SetActive(false);
       canvasObject2.SetActive(false);
    }

    public void Subtract10()
    {
        ItemSlotData item = InventoryManager.Instance.ItemSearch("Cotton Seeds");
        
        
            InventoryManager.Instance.ItemAdd(item);
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
        ItemSlotData item = InventoryManager.Instance.ItemSearch("Rare Shirt");
        if (item != null)
        {
            InventoryManager.Instance.ItemRemove(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(30);
        }
    }
    public void Add20()
    {
        ItemSlotData item = InventoryManager.Instance.ItemSearch("Washed Wool");
        if (item != null)
        {
            InventoryManager.Instance.ItemRemove(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(20);
        }
    }
    public void Add50()
    {
        ItemSlotData item = InventoryManager.Instance.ItemSearch("Red Dyed shirt");
        if (item != null)
        {
            InventoryManager.Instance.ItemRemove(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(50);
        }
    }
    public void Add75()
    {
        ItemSlotData item = InventoryManager.Instance.ItemSearch("Yellow Dyed Shirt");
        if (item != null)
        {
            InventoryManager.Instance.ItemRemove(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(75);
        }
    }

    public void ShopkeeperOn()
    {
        canvasObject1.SetActive(true);
        //canvasObject2.SetActive(false);
    }
    public void ShopkeeperOff()
    {
        canvasObject1.SetActive(false);
        canvasObject2.SetActive(true);
    }

    public void MaterialTabOn()
    {
        MaterialsTab.SetActive(true);
        CropsTab.SetActive(false);
        FarmTab.SetActive(false);
        SeedTab.SetActive(false);
    }
    public void MaterialTabOff()
    {
        MaterialsTab.SetActive(false);
    }
    public void CropsTabOn()
    {
        CropsTab.SetActive(true);
        MaterialsTab.SetActive(false);
        FarmTab.SetActive(false);
        SeedTab.SetActive(false);
    }
    public void CropsTabOff()
    {
        CropsTab.SetActive(false);
    }
    public void FarmTabOn()
    {
        FarmTab.SetActive(true);
        MaterialsTab.SetActive(false);
        CropsTab.SetActive(false);
        SeedTab.SetActive(false);
    }
    public void FarmTabOff()
    {
        FarmTab.SetActive(false);
    }
    public void SeedsTabOn()
    {
        SeedTab.SetActive(true);
        MaterialsTab.SetActive(false);
        CropsTab.SetActive(false);
        FarmTab.SetActive(false);
    }
    public void SeedsTabOff()
    {
        SeedTab.SetActive(false);
    }
    public void ClothesTabOn()
    {
        ClothesTab.SetActive(true);
        CropsTab.SetActive(false);
        FarmTab.SetActive(false);
        SeedTab.SetActive(false);
        MaterialsTab.SetActive(false);
    }


    public void ShearSheep()
    {
         ItemSlotData item = InventoryManager.Instance.ItemSearch("Wool");
       
  
             InventoryManager.Instance.ItemAdd(item);
        
    }
}
