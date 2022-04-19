using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LoomMachine : MonoBehaviour
{
    [Header("Spawn Points")]
    public Transform lmSpawnPoint;

    [Header("Animation")]
    public GameObject selectedFinished;
    public GameObject LMObject;

    [Header("Buttons")]
    public Button shirtCraftButton;
    public Button polyesterCraftButton;

    Animator LManim;
    private AudioController audioController;
    public void Start()
    {
        audioController = GameObject.Find("GameManager").GetComponent<AudioController>();
        shirtCraftButton.interactable = false;
        polyesterCraftButton.interactable = false;
        CheckLMachineInventory();
    }

    public void Update()
    {
        CheckLMachineInventory();
    }

    public void CheckLMachineInventory()
    {
        var fabricCheck = Inventory.Instance.FindItemByType("Washed Cotton");
        if (fabricCheck.itemType != null && fabricCheck.quantity >= 1)
        {
            shirtCraftButton.interactable = true;
        }
        else
        {
            shirtCraftButton.interactable = false;
        }

        var polyesterCheck = Inventory.Instance.FindItemByType("Polyester");
        if (polyesterCheck.itemType != null && polyesterCheck.quantity >= 1)
        {
            polyesterCraftButton.interactable = true;
        }
        else
        {
            polyesterCraftButton.interactable = false;
        }
    }
    
    public void FabricCraft()
    {
        var lmItemToUse = Inventory.Instance.FindItemByType("Washed Cotton");
        CheckLMachineInventory();
        if (lmItemToUse != null && lmItemToUse.quantity >= 1)
        {
            audioController.PlaySoundComplete("Button Click");
            Inventory.Instance.RemoveItem(lmItemToUse.itemType, 1);
            LManim = LMObject.GetComponent<Animator>();
            LManim.Play("LMAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(2, "Cotton Shirt", 1, lmSpawnPoint.position));
        }
    }

    public void InorganicFabricCraft()
    {
        var lmItemToUse = Inventory.Instance.FindItemByType("Polyester");
        CheckLMachineInventory();
        if (lmItemToUse != null && lmItemToUse.quantity >= 1)
        {
            audioController.PlaySoundComplete("Button Click");
            Inventory.Instance.RemoveItem(lmItemToUse.itemType, 1);
            LManim = LMObject.GetComponent<Animator>();
            LManim.Play("LMAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(2, "Polyester Shirt", 1, lmSpawnPoint.position));
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
