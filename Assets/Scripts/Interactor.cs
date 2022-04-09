using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Interactor : MonoBehaviour
{
    PlayerController playerController;
    private Farmland selectedFarmLand = null;
    public InteractableObject selectedItemInteractableScript = null;
    public GameObject selectedItemInteractable = null;
    public InventoryManager inventory;

    private void Start()
    {
        playerController = transform.parent.GetComponent<PlayerController>();
    }

    void Update()
    {
        if((Input.GetButtonDown("Interact")) && selectedItemInteractable)
        { //pick up object
            if (selectedItemInteractableScript.inventory)
            {
                inventory.AddItem(selectedItemInteractable);
            }

            selectedItemInteractableScript.SendMessage("interaction");
        }


        RaycastHit detected;
        if (Physics.Raycast(transform.position, Vector3.down, out detected, 1))
        {
            InteractableDetected(detected);
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
            SelectedInteractableObject(interactableObject);
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
<<<<<<< HEAD
        InventoryManager.Instance.EquippedToInventory(InventorySlot.InventoryCategory.Items);

        if (InventoryManager.Instance.SlotEquipped(InventorySlot.InventoryCategory.Items))
=======
        if (InventoryManager.Instance.equippedItem != null)
>>>>>>> parent of 947ca393 (Reworked inventory system to accommodate stackable items. Fixed sun lighting to now go from East to West.)
        {
            InventoryManager.Instance.EquippedToInventory(InventorySlot.InventoryCategory.Items);
        }
        
        if (selectedItemInteractableScript != null)
        {
            selectedItemInteractableScript.Pickup();
        }
    } 
}
