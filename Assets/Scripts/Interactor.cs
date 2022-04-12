using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Interactor : MonoBehaviour
{
    public Farmland selectedFarmLand = null;
    public InteractableObject selectedItemInteractableScript = null;
    public GameObject selectedInterObj = null;
    public Inventory inventory;


    void Update()
    {
        if(Input.GetButtonDown("Interact") && selectedInterObj)
        { //pick up object
            if (selectedItemInteractableScript.inventory)
            {
                inventory.AddItem(selectedItemInteractableScript);
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Item"))
        {
            Debug.Log(other.name);
            selectedInterObj = other.gameObject;
            selectedItemInteractableScript = selectedInterObj.GetComponent<InteractableObject>();
            SelectedInteractableObject(selectedItemInteractableScript);
        }

        if (other.CompareTag("Field"))
        {
            Farmland farmLand = other.GetComponent<Farmland>();
            SelectedFarmLand(farmLand);
            return;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Item"))
        {
            if (other.gameObject == selectedInterObj)
            {
                selectedInterObj = null;
                selectedItemInteractableScript = null;
                
            }
        }

        if (other.CompareTag("Field"))
        {
            if (selectedFarmLand != null)
            {
                selectedFarmLand.Selected(false);
                selectedFarmLand = null;
            }
        }
    }

    
    private void SelectedFarmLand(Farmland farmLand)
    {
        if (selectedFarmLand != null)
        {
            selectedFarmLand.Selected(false);
        }

        selectedFarmLand = farmLand;
        farmLand.Selected(true);
        
    }

    private void SelectedInteractableObject(InteractableObject interactableObject)
    {
        if (selectedItemInteractableScript != null)
        {
            selectedItemInteractableScript.SelectedInteractableObject(false);
        }

        selectedItemInteractableScript = interactableObject;
        interactableObject.SelectedInteractableObject(true);
    }

    public void Interact()
    {
        if (selectedFarmLand != null)
        {
            selectedFarmLand.CottonSeed();
            return;
        }
        
    }

}
