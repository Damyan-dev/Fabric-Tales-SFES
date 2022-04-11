using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;

public class Inventory : MonoBehaviour
{
    public static Inventory Instance { get; private set; }

    public Image itemDisplayImage;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
            DontDestroyOnLoad(this);
        }
    }

    [Header("Inventory UI")]
    public GameObject inventoryPanel; // Sets the Inventory panel.
    public GameObject JournalPanel; // sets the journal panel
    public Text itemNameText;
    public Text itemDescriptionText;
    public Text itemQuantity;
    public Image[] InventorySlots = new Image[25];

    public InteractableObject[] inventory = new InteractableObject[25];

    public void AddItem(InteractableObject interObject)
    {
        
        var foundItem = FindItemByType(interObject.itemType);
        InteractableObject inventoryItem = null;

        if (foundItem != null)
        {
            inventoryItem = foundItem;
        }
        else
        {
            throw new Exception("Please make sure inventory item is in scene and attached to the inventory with a quantity of 0.");
        }

        
        inventoryItem.quantity += interObject.quantity;

        Interactor player = GetComponent<Interactor>();
        player.selectedInterObj = null;
        player.selectedItemInteractableScript = null;
        interObject.gameObject.SendMessage("DoInteraction");
        
        // This loop is for the UI;
        for (int i = 0; i < inventory.Length; i++)
        {      
            var currentInventorySlot = inventory[i];

            if (currentInventorySlot.itemType == interObject.itemType && currentInventorySlot.quantity > 0)
            {
                InventorySlots[i].gameObject.GetComponent<InventorySlot>().SetUI(currentInventorySlot);
                break;
            }

        }


    }

    public void RemoveItem(InteractableObject interObject)
    {
        var foundItem = FindItemByType(interObject.itemType);
        InteractableObject inventoryItem = null;

        if (foundItem != null)
        {
            inventoryItem = foundItem.GetComponent<InteractableObject>();
        }
        else
        {
            throw new Exception("Please make sure inventory item is in scene and attached to the inventory with a quantity of 0.");
        }


        inventoryItem.quantity -= interObject.quantity;

        if (inventoryItem.quantity < 0)
        {
            inventoryItem.quantity = 0;
        }

        // This loop is for the UI;
        for (int i = 0; i < inventory.Length; i++)
        {
            var currentInventorySlot = inventory[i].GetComponent<InteractableObject>();

            if (currentInventorySlot.itemType == interObject.itemType && currentInventorySlot.quantity > 0)
            {
                InventorySlots[i].gameObject.GetComponent<InventorySlot>().SetUI(currentInventorySlot);
                break;
            }

        }


    }

    public bool FindItem(GameObject item)
    {
        for (int i = 0; i < inventory.Length; i++)
        {
            if(inventory[i] == item)
            {
                return true;
            }
        }
        return false;
    }
    
    // Search for an item by its type, rather than GameObject.
    public InteractableObject FindItemByType(string itemType)
    {
        for(int i = 0; i < inventory.Length; i++)
        {
            if(inventory[i] != null)
            {
                if(inventory[i].itemType == itemType)
                {
                    return inventory[i];
                }
            }
        }
        return null;
    }
    public void ToggleInventoryPanel()
    {
        inventoryPanel.SetActive(!inventoryPanel.activeSelf);
    }
    public void ToggleJournalPanel()
    {
        JournalPanel.SetActive(!JournalPanel.activeSelf);
    }

    // public InventoryCategory inventoryCategory;

    /*public void Show(InteractableObject itemSlot)
    {
        itemToShow = itemSlot;

        if (itemToShow != null)
        {
            itemDisplayImage.sprite = itemToShow.thumbnail;

            itemDisplayImage.gameObject.SetActive(true);
            return;
        }
        itemDisplayImage.gameObject.SetActive(false);
    } */

    /*public void OnMouseEnter()
    {
        ShowItemDescription(itemToShow);
        Debug.Log("Inventory mouse enter.");

    }

    public void OnMouseExit()
    {
        ShowItemDescription(null);

    } */

    public void ShowItemDescription(InteractableObject data)
    {
        if (data == null)
        {
            itemNameText.text = "";
            itemDescriptionText.text = "";
            return;
        }
        itemNameText.text = data.itemName;
        itemDescriptionText.text = data.description;
    }
}
