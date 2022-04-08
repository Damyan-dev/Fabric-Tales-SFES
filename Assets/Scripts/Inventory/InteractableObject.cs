using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableObject : MonoBehaviour
{
    public ItemData item;
    public GameObject selectedIntObj;

    public void DoInteraction()
    {//picked up and put in inv

        gameObject.SetActive(false);
    }
    public void Pickup()
    {
        InventoryManager.Instance.EquipHandSlot(item);
        Destroy(gameObject);
    }
    
    public void SelectedInteractableObject(bool toggle)
    {
        selectedIntObj.SetActive(toggle);
    }
}
