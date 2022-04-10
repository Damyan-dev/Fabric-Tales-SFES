using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Inventory : MonoBehaviour
{
    public static Inventory Instance { get; private set; }

    InteractableObject itemToShow;
    //ItemData itemToShow;
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
    public Image[] InventorySlots = new Image[25];

    public GameObject[] inventory = new GameObject[25];

    public void AddItem(GameObject item)
    {
        bool itemAdded = false;

        for (int i = 0; i < inventory.Length; i++)
        {
            if ((inventory[i]) == null)
            {
                inventory[i] = item;
                InventorySlots[i].overrideSprite = item.GetComponent<InteractableObject>().thumbnail;
                Debug.Log(item.name + " was added");
                itemAdded = true;
                item.SendMessage("DoInteraction");
                break;
            }
        }

        if (!itemAdded)
        {
            Debug.Log("inventory is full - item not added");
        }

    }

    public void RemoveItem(GameObject item)
    {
        for (int i = 0; i < inventory.Length; i++)
        {
            if (inventory[i] != null)
            {
                if (inventory[i] == item)
                {
                    inventory[i] = null;
                    Debug.Log(item.name + " has been deleted from inventory");
                    InventorySlots[i].overrideSprite = null;
                    
                    
                    break;
                }
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
    public GameObject FindItemByType(string itemType)
    {
        for(int i = 0; i < inventory.Length; i++)
        {
            if(inventory[i] != null)
            {
                if(inventory[i].GetComponent<InteractableObject>().itemType == itemType)
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

    public void OnMouseEnter()
    {
        ShowItemDescription(itemToShow);

    }

    public void OnMouseExit()
    {
        ShowItemDescription(null);

    }

    /*public void OnPointerEnter(PointerEventData eventData)
    {
        ShowItemDescription(itemToShow);
    }

    public void OnPointerExit(PointerEventData eventData)
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
