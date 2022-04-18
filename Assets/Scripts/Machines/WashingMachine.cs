using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WashingMachine : MonoBehaviour
{
    [Header("Spawn Points")]
    public Transform wmSpawnPoint;

    [Header("Animation")]
    public GameObject selectedFinished;
    public GameObject WMObject;
    

    [Header("Buttons")]
    public Button washCottonButton;

    Animator WManim;

    public void Start()
    {
        washCottonButton.interactable = false;
        CheckWMInventory();
    }

    public void Update()
    {
        CheckWMInventory();
    }

    public void CheckWMInventory()
    {
        var washCheck = Inventory.Instance.FindItemByType("Cotton");
        if (washCheck.itemType != null && washCheck.quantity >= 1)
        {
            washCottonButton.interactable = true;
        }
        else
        {
            washCottonButton.interactable = false;
        }
    }

    public void WashedCottonCraft()
    {
        var wmItemToUse = Inventory.Instance.FindItemByType("Cotton");
        CheckWMInventory();
        if (wmItemToUse != null && wmItemToUse.quantity >= 1)
        {
            Inventory.Instance.RemoveItem(wmItemToUse.itemType, 1);
            WManim = WMObject.GetComponent<Animator>();
            WManim.Play("WMAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(5, "Washed Cotton", 1, wmSpawnPoint.position));
        }
    }

    public IEnumerator CraftDelay(float seconds, string itemType, int quantity, Vector3 spawnPoint)
    {
        yield return new WaitForSeconds(seconds);
        GameObject craftedItem = Instantiate(Inventory.Instance.FindItemByType(itemType).gameObject);
        craftedItem.GetComponent<InteractableObject>().quantity = quantity;
        craftedItem.transform.parent = null;
        craftedItem.transform.position = spawnPoint;
        selectedFinished.SetActive(true);
        yield return new WaitForSeconds(seconds);
        selectedFinished.SetActive(false);

    }
}
