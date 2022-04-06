using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Interactor : MonoBehaviour
{
    PlayerController playerController;
    private Farmland selectedFarmLand = null;
    private InteractableObject selectedItemInteractable = null;

    private void Start()
    {
        playerController = transform.parent.GetComponent<PlayerController>();
    }

    void Update()
    {
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

        if (selectedItemInteractable != null)
        {
            selectedItemInteractable.SelectedInteractableObject(false);
            selectedItemInteractable = null;
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
        if (selectedItemInteractable != null)
        {
            selectedItemInteractable.SelectedInteractableObject(false);
        }

        selectedItemInteractable = interactableObject;
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
        if (InventoryManager.Instance.SlotEquipped(InventorySlot.InventoryCategory.Items))
        {
            InventoryManager.Instance.EquippedToInventory(InventorySlot.InventoryCategory.Items);
        }
        
        if (selectedItemInteractable != null)
        {
            selectedItemInteractable.Pickup();
        }
    }
}
