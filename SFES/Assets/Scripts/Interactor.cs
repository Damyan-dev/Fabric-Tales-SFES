using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Interactor : MonoBehaviour
{
    private Farmland selectedFarmLand = null;

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
    

    public void Interact()
    {
        if (selectedFarmLand != null)
        {
            selectedFarmLand.Interact();
            return;
        }
        
        Debug.Log("Not on farm land");
    }
}
