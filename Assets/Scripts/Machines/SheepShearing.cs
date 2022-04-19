using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SheepShearing : MonoBehaviour
{
    [Header("Spawn Points")]
    public Transform SheepSpawnPoint;

    [Header("Animation")]
    public GameObject selectedFinished;
    public GameObject SheepObject;


    [Header("Buttons")]
    public Button shearSheepButton;

    Animator Sheepanim;
    private int nextShear = 0;


    public void Start()
    {
        shearSheepButton.interactable = false;
        CheckSheepInventory();
    }

    public void Update()
    {
        CheckSheepInventory();
    }

    public void CheckSheepInventory()
    {
        var woolCheck = Inventory.Instance.FindItemByType("Wool");
        if (woolCheck.itemType != null && nextShear == 0)
        {
            shearSheepButton.interactable = true;
        }
        else
        {
            shearSheepButton.interactable = false;
        }
    }

    public void WoolCraft()
    {
        //Sheepanim = SheepObject.GetComponent<Animator>();
        //Sheepanim.Play("SheepAction", 0, 0.0f);
        nextShear = 1;
        Inventory.Instance.StartCoroutine(CraftDelay(5, "Wool", 1, SheepSpawnPoint.position));
        
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
        nextShear = 0;

    }
}
