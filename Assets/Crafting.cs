using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Crafting : MonoBehaviour
{
    
    public Transform wmSpawnPoint;
    public Transform lmSpawnPoint;
    public Transform dyeSpawnPoint;
    public GameObject selectedFinished;
    public GameObject WMObject;
    public GameObject LMObject;
    public GameObject DyeObject;
    Animator WManim;
    Animator LManim;
    Animator Dyeanim;

    public void WashedCottonCraft()
    {
       var wmItemToUse = Inventory.Instance.FindItemByType("Cotton");

        if (wmItemToUse != null && wmItemToUse.quantity >= 1)
        {
            Inventory.Instance.RemoveItem(wmItemToUse.itemType, 1);
            WManim = WMObject.GetComponent<Animator>();
            WManim.Play("WMAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(2, "Washed Cotton", 1, wmSpawnPoint.position));
        }
    }

    public void FabricCraft()
    {
        var lmItemToUse = Inventory.Instance.FindItemByType("Washed Cotton");

        if (lmItemToUse != null && lmItemToUse.quantity >= 1)
        {
         Inventory.Instance.RemoveItem(lmItemToUse.itemType, 1);
            LManim = LMObject.GetComponent<Animator>();
            LManim.Play("LMAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(2, "Cotton Shirt", 1, lmSpawnPoint.position));
        }
    }

    public void InorganicFabricCraft()
    {
        var lmItemToUse = Inventory.Instance.FindItemByType("Polyester");
        if (lmItemToUse != null && lmItemToUse.quantity >= 1)
        {
         Inventory.Instance.RemoveItem(lmItemToUse.itemType, 1);
            LManim = LMObject.GetComponent<Animator>();
            LManim.Play("LMAction", 0, 0.0f);
            Inventory.Instance.StartCoroutine(CraftDelay(2, "Polyester Shirt", 1, lmSpawnPoint.position));
        }
    }

    public void OrganicRDyeCraft()
    {
        var dyeItemToUse = Inventory.Instance.FindItemByType("Cotton Shirt");
        var dyeMaterialToUse = Inventory.Instance.FindItemByType("Elderberry");

        if (dyeItemToUse != null && dyeItemToUse.quantity >= 1 && dyeMaterialToUse != null && dyeMaterialToUse.quantity >= 1)
        {
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

        if (dyeItemToUse != null && dyeItemToUse.quantity >= 1 && dyeMaterialToUse != null && dyeMaterialToUse.quantity >= 1)
        {
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


        if (dyeItemToUse != null && dyeItemToUse.quantity >= 1 && dyeMaterialToUse != null && dyeMaterialToUse.quantity >= 1)
        {
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


        if (dyeItemToUse != null && dyeItemToUse.quantity >= 1 && dyeMaterialToUse != null && dyeMaterialToUse.quantity >= 1)
        {
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
        selectedFinished.SetActive(true);
        yield return new WaitForSeconds(seconds);
        selectedFinished.SetActive(false);

    }
}
