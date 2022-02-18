using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    public static UIController Instance { get; private set; }

    public GameObject inventoryPanel; // Sets the Inventory panel.
    public GameObject JournalPanel; // sets the journal panel
    public InventorySlot[] itemsSlots; // The UI for the item slots.
    public InventorySlot[] toolSlots; // The UI for the tool slots.
    public Image guiEquipSlot; // Sets the currently equipped tool in the GUI.
    public EquippedSlot toolEquippedSlot;
    public EquippedSlot itemEquippedSlot;

    // Information for the items in the info box.
    public Text itemNameText;
    public Text itemDescriptionText;

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

    private void Start()
    {
        DisplayInventory();
        SetInvSlotIndexes();
    }

    public void DisplayInventory()
    {
        ItemData[] invItemSlots = InventoryManager.Instance.items;
        ItemData[] invToolSlots = InventoryManager.Instance.tools;
        RenderInventoryPanel(invItemSlots, itemsSlots);
        RenderInventoryPanel(invToolSlots, toolSlots);
        toolEquippedSlot.Show(InventoryManager.Instance.equippedTool);
        itemEquippedSlot.Show(InventoryManager.Instance.equippedItem);

        ItemData equipTool = InventoryManager.Instance.equippedItem;
        if (equipTool != null)
        {
            guiEquipSlot.sprite = equipTool.thumbnail;
            guiEquipSlot.gameObject.SetActive(true);
            return;
        }
        guiEquipSlot.gameObject.SetActive(false);
    }

    void RenderInventoryPanel(ItemData[] items, InventorySlot[] uiSlots)
    {
        for (int i = 0; i < uiSlots.Length; i++)
        {
            uiSlots[i].Show(items[i]);
        }
    }

    public void ToggleInventoryPanel()
    {
        inventoryPanel.SetActive(!inventoryPanel.activeSelf);
        DisplayInventory();
    }
    public void ToggleJournalPanel()
    {
        JournalPanel.SetActive(!JournalPanel.activeSelf);
    }

        public void ShowItemInfo(ItemData data)
    {
        if (data == null)
        {
            itemNameText.text = "";
            itemDescriptionText.text = "";
            return;
        }
        itemNameText.text = data.name;
        itemDescriptionText.text = data.description;
    }

    public void SetInvSlotIndexes()
    {
        for (int i = 0; i < toolSlots.Length; i++)
        {
            toolSlots[i].SetIndex(i);
            itemsSlots[i].SetIndex(i);
        }
    }
}
