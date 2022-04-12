using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableObject : MonoBehaviour
{
    [Header("Farming/Seeds/Tools")]
    public GameObject harvestable;
    public GameObject seedNeeded;
    public GameObject seedling;
    public int timeToGrow;
    
    [Header("Interaction setters")]
    public bool inventory;
    public bool machine;
    public bool farm;
    public bool cottonSeed;
    public bool elderberrySeed;
    public bool tumericSeed;
    public bool fertilizer;
    public bool shears;
    public string itemType;

    [Header("Inventory")]
    //public ItemData item;
    public GameObject selectedIntObj;
    public string itemName;
    public string description;
    public Sprite thumbnail;
    public int quantity;


    public Animator anim;
   
    public void DoInteraction()
    {
        // picked up and put in inv
        gameObject.SetActive(false);
    }
  
    public void SelectedInteractableObject(bool toggle)
    {
        selectedIntObj.SetActive(toggle);
    }
}
