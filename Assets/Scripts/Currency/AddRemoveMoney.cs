using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddRemoveMoney : MonoBehaviour
{
    public GameObject ingameCamera;
    public GameObject canvasObject1;
    public GameObject canvasObject2;

    // Start is called before the first frame update
    void Start()
    {
       canvasObject1.SetActive(false);
       canvasObject2.SetActive(false);
    }

    public void Subtract10()
    {
        ItemData item = InventoryManager.Instance.ItemSearch("Cotton Seeds");
        
        
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
        ItemData item = InventoryManager.Instance.ItemSearch("Rare Shirt");
        if (item != null)
        {
            InventoryManager.Instance.ItemRemove(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(30);
        }
    }
    public void Add20()
    {
        ItemData item = InventoryManager.Instance.ItemSearch("Washed Wool");
        if (item != null)
        {
            InventoryManager.Instance.ItemRemove(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(30);
        }
    }
    public void Add50()
    {
        ItemData item = InventoryManager.Instance.ItemSearch("Dyed Shirt");
        if (item != null)
        {
            InventoryManager.Instance.ItemRemove(item);
            ingameCamera.GetComponent<playerMoney>().addMoney(50);
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

    public void ShearSheep()
    {
         ItemData item = InventoryManager.Instance.ItemSearch("Wool");
       
  
             InventoryManager.Instance.ItemAdd(item);
        
    }
}
