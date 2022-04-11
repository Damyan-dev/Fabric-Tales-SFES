using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableObject : MonoBehaviour
{
    [Header("Farming/Seeds/Tools")]
    public ItemData cropToHarvest;
    public GameObject seedNeeded;
    public GameObject seedling;
    public GameObject wateringCanModel;
    public GameObject shearsModel;
    public int timeToGrow;
    
    [Header("Interaction setters")]
    public bool inventory;
    public bool machine;
    public bool farm;
    public bool seed;
    public bool fertilizer;
    public bool shears;
    public string itemType;

    [Header("Inventory")]
    public ItemData item;
    public GameObject selectedIntObj;
    public string itemName;
    public string description;
    public Sprite thumbnail;


    public Animator anim;
   
    public void DoInteraction()
    {//picked up and put in inv

        gameObject.SetActive(false);
    }
  
    public void SelectedInteractableObject(bool toggle)
    {
        selectedIntObj.SetActive(toggle);
    }
}
