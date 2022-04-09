using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Interactor : MonoBehaviour
{
    PlayerController playerController;
    private Farmland selectedFarmLand = null;
    public InteractableObject selectedItemInteractableScript = null;
    public GameObject selectedInterObj = null;
    public Inventory inventory;

    private void Start()
    {
        playerController = transform.parent.GetComponent<PlayerController>();
    }

    void Update()
    {
        if(Input.GetButtonDown("Interact") && selectedInterObj)
        { //pick up object
            if (selectedItemInteractableScript.inventory)
            {
                inventory.AddItem(selectedInterObj);
            }
        }


        /*RaycastHit detected;
        if (Physics.Raycast(transform.position, Vector3.down, out detected, 1))
        {
            InteractableDetected(detected);
        } */
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
            Debug.Log(other.name);
            Farmland farmLand = other.GetComponent<Farmland>();
            SelectedFarmLand(farmLand);
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
            if (other.gameObject == selectedInterObj)
            {
                selectedFarmLand.Selected(false);
                selectedFarmLand = null;
            }
        }
    }

    private void InteractableDetected(RaycastHit detected)
    {
        Collider hit = detected.collider;

        if (hit.CompareTag("Field"))
        {
            Farmland farmLand = hit.GetComponent<Farmland>();
            SelectedFarmLand(farmLand);
            return;
        }
        if (selectedFarmLand != null)
        {
            selectedFarmLand.Selected(false);
            selectedFarmLand = null;
        }

        if (hit.CompareTag("Item"))
        {
            InteractableObject interactableObject = hit.GetComponent<InteractableObject>();
            selectedInterObj = hit.gameObject;
            SelectedInteractableObject(interactableObject);
        }
        else
        {
            return;
        }

        if (selectedItemInteractableScript != null)
        {
            selectedItemInteractableScript.SelectedInteractableObject(false);
            selectedItemInteractableScript = null;
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
            selectedFarmLand.Interact();
            return;
        }
        
    }

    public void ItemPickup()
    {
        InventoryManager.Instance.EquippedToInventory(InventorySlot.InventoryCategory.Items);

        if (InventoryManager.Instance.SlotEquipped(InventorySlot.InventoryCategory.Items))
        {
            InventoryManager.Instance.EquippedToInventory(InventorySlot.InventoryCategory.Items);
        }
        
        if (selectedItemInteractableScript != null)
        {
            selectedItemInteractableScript.Pickup();
        }
    } 
}
