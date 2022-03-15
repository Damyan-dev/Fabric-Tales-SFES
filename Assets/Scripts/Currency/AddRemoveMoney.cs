using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddRemoveMoney : MonoBehaviour
{
    public GameObject camera;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void Subtract10()
    {
        ItemData item = InventoryManager.Instance.ItemSearch("Cotton Seeds");
        if (item != null)
        {
            InventoryManager.Instance.ItemAdd(item);
            camera.GetComponent<playerMoney>().subtractMoney(10);
        }
    }

    public void Subtract25()
    {
        camera.GetComponent<playerMoney>().subtractMoney(25);
    }
    public void Subtract100()
    {
        camera.GetComponent<playerMoney>().subtractMoney(100);
    }
    public void Add30()
    {
        ItemData item = InventoryManager.Instance.ItemSearch("Rare Shirt");
        if (item != null)
        {
            InventoryManager.Instance.ItemRemove(item);
            camera.GetComponent<playerMoney>().addMoney(30);
        }
    }
    public void Add50()
    {
        ItemData item = InventoryManager.Instance.ItemSearch("Dyed Shirt");
        if (item != null)
        {
            InventoryManager.Instance.ItemRemove(item);
            camera.GetComponent<playerMoney>().addMoney(50);
        }
    }
    public void ShearSheep()
    {
        ItemData item = InventoryManager.Instance.ItemSearch("Wool");
        if (item != null)
        {
            InventoryManager.Instance.ItemAdd(item);
        }
    }
}
