using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableObject : MonoBehaviour
{
    public ItemData item;
    public GameObject selectedIntObj;

    public void Pickup()
    {
        InventoryManager.Instance.equippedItem = item;
        Destroy(gameObject);
    }
    
    public void SelectedInteractableObject(bool toggle)
    {
        selectedIntObj.SetActive(toggle);
    }
}