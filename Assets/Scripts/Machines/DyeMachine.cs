using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DyeMachine : MonoBehaviour
{
    [Header("Spawn Points")]
    public Transform dyeSpawnPoint;

    [Header("Animation")]
    public GameObject selectedFinished;
    public GameObject DyeObject;

    [Header("Buttons")]
    public Button shirtRedDyeButton;
    public Button shirtYellowDyeButton;
    public Button polyShirtRedDyeButton;
    public Button polyShirtYellowDyeButton;

    
    Animator Dyeanim;
    private AudioController audioController;

    public void Start()
    {
        audioController = GameObject.Find("GameManager").GetComponent<AudioController>();
        shirtRedDyeButton.interactable = false;
        shirtYellowDyeButton.interactable = false;
        polyShirtYellowDyeButton.interactable = false;
        polyShirtRedDyeButton.interactable = false;
        CheckFabricRDyeMachineInventory();
        CheckFabricYDyeMachineInventory();
        CheckPolyesterRDyeInventory();
        CheckPolyesterYDyeInventory();
    }

    public void Update()
    {
        CheckFabricRDyeMachineInventory();
        CheckFabricYDyeMachineInventory();
        CheckPolyesterRDyeInventory();
        CheckPolyesterYDyeInventory();
    }


    public void CheckFabricRDyeMachineInventory()
    {
        var fabricElderberryCheck = Inventory.Instance.FindItemByType("Elderberry");
        var shirtCheck = Inventory.Instance.FindItemByType("Cotton Shirt");
        if (fabricElderberryCheck.itemType != null && fabricElderberryCheck.quantity >= 1 && shirtCheck.itemType != null && shirtCheck.quantity >= 1)
        {
            shirtRedDyeButton.interactable = true;
        }
        else
        {
            shirtRedDyeButton.interactable = false;
        }
    }

    public void CheckFabricYDyeMachineInventory()
    {
        var fabricTurmericCheck = Inventory.Instance.FindItemByType("Turmeric");
        var shirtCheck = Inventory.Instance.FindItemByType("Cotton Shirt");
        if (fabricTurmericCheck.itemType != null && fabricTurmericCheck.quantity >= 1 && shirtCheck.itemType != null && shirtCheck.quantity >= 1)
        {
            shirtYellowDyeButton.interactable = true;
        }
        else
        {
            shirtYellowDyeButton.interactable = false;
        }
    }

    public void CheckPolyesterRDyeInventory()
    {
        var polyShirtCheck = Inventory.Instance.FindItemByType("Polyester Shirt");
        var polyElderberryCheck = Inventory.Instance.FindItemByType("Elderberry");
        if (polyElderberryCheck.itemType != null && polyElderberryCheck.quantity >= 1 && polyShirtCheck.itemType != null && polyShirtCheck.quantity >= 1)
        {
            polyShirtRedDyeButton.interactable = true;
        }
        else
        {
            polyShirtRedDyeButton.interactable = false;
        }
    }

    public void CheckPolyesterYDyeInventory()
    {
        var polyTurmericCheck = Inventory.Instance.FindItemByType("Turmeric");
        var polyShirtCheck = Inventory.Instance.FindItemByType("Polyester Shirt");
        if (polyTurmericCheck.itemType != null && polyTurmericCheck.quantity >= 1 && polyShirtCheck.itemType != null && polyShirtCheck.quantity >= 1)
        {
            polyShirtYellowDyeButton.interactable = true;
        }
        else
        {
            polyShirtYellowDyeButton.interactable = false;
        }
    }

    public void OrganicRDyeCraft()
    {
        var dyeItemToUse = Inventory.Instance.FindItemByType("Cotton Shirt");
        var dyeMaterialToUse = Inventory.Instance.FindItemByType("Elderberry");
        CheckFabricRDyeMachineInventory();
        CheckFabricYDyeMachineInventory();
        CheckPolyesterRDyeInventory();
        CheckPolyesterYDyeInventory();
        if (dyeItemToUse != null && dyeItemToUse.quantity >= 1 && dyeMaterialToUse != null && dyeMaterialToUse.quantity >= 1)
        {
            audioController.PlaySoundComplete("Button Click");
            Inventory.Instance.RemoveItem(dyeItemToUse.itemType, 1);
            Inventory.Instance.RemoveItem(dyeMaterialToUse.itemType, 1);
            Dyeanim = DyeObject.GetComponent<Animator>();
            Dyeanim.Play("DyeAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(2, "Red Cotton Shirt", 1, dyeSpawnPoint.position));
            
        }
    }
    public void OrganicYDyeCraft()
    {

        var dyeItemToUse = Inventory.Instance.FindItemByType("Cotton Shirt");
        var dyeMaterialToUse = Inventory.Instance.FindItemByType("Turmeric");
        CheckFabricRDyeMachineInventory();
        CheckFabricYDyeMachineInventory();
        CheckPolyesterRDyeInventory();
        CheckPolyesterYDyeInventory();
        if (dyeItemToUse != null && dyeItemToUse.quantity >= 1 && dyeMaterialToUse != null && dyeMaterialToUse.quantity >= 1)
        {
            audioController.PlaySoundComplete("Button Click");
            Inventory.Instance.RemoveItem(dyeItemToUse.itemType, 1);
            Inventory.Instance.RemoveItem(dyeMaterialToUse.itemType, 1);
            Dyeanim = DyeObject.GetComponent<Animator>();
            Dyeanim.Play("DyeAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(2, "Yellow Cotton Shirt", 1, dyeSpawnPoint.position));
        }

    }

    public void InorganicRDyeCraft()
    {
        var dyeItemToUse = Inventory.Instance.FindItemByType("Polyester Shirt");
        var dyeMaterialToUse = Inventory.Instance.FindItemByType("Elderberry");
        CheckFabricRDyeMachineInventory();
        CheckFabricYDyeMachineInventory();
        CheckPolyesterRDyeInventory();
        CheckPolyesterYDyeInventory();
        if (dyeItemToUse != null && dyeItemToUse.quantity >= 1 && dyeMaterialToUse != null && dyeMaterialToUse.quantity >= 1)
        {
            audioController.PlaySoundComplete("Button Click");
            Inventory.Instance.RemoveItem(dyeItemToUse.itemType, 1);
            Inventory.Instance.RemoveItem(dyeMaterialToUse.itemType, 1);
            Dyeanim = DyeObject.GetComponent<Animator>();
            Dyeanim.Play("DyeAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(2, "Red Polyester Shirt", 1, dyeSpawnPoint.position));
        }
    }
    public void InorganicYDyeCraft()
    {
        var dyeItemToUse = Inventory.Instance.FindItemByType("Polyester Shirt");
        var dyeMaterialToUse = Inventory.Instance.FindItemByType("Turmeric");
        CheckFabricRDyeMachineInventory();
        CheckFabricYDyeMachineInventory();
        CheckPolyesterRDyeInventory();
        CheckPolyesterYDyeInventory();
        if (dyeItemToUse != null && dyeItemToUse.quantity >= 1 && dyeMaterialToUse != null && dyeMaterialToUse.quantity >= 1)
        {
            audioController.PlaySoundComplete("Button Click");
            Inventory.Instance.RemoveItem(dyeItemToUse.itemType, 1);
            Inventory.Instance.RemoveItem(dyeMaterialToUse.itemType, 1);
            Dyeanim = DyeObject.GetComponent<Animator>();
            Dyeanim.Play("DyeAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(2, "Yellow Polyester Shirt", 1, dyeSpawnPoint.position));
        }

    }

    public IEnumerator CraftDelay(float seconds, string itemType, int quantity, Vector3 spawnPoint)
    {
        yield return new WaitForSeconds(seconds);
        GameObject craftedItem = Instantiate(Inventory.Instance.FindItemByType(itemType).gameObject);
        craftedItem.GetComponent<InteractableObject>().quantity = quantity;
        craftedItem.transform.parent = null;
        craftedItem.transform.position = spawnPoint;
        audioController.PlaySoundComplete("Finished");
        selectedFinished.SetActive(true);
        yield return new WaitForSeconds(seconds);
        selectedFinished.SetActive(false);

    }
}
