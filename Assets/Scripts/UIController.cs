using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour, ITimeTracker
{
    public static UIController Instance { get; private set; }

    public GameObject inventoryPanel; // Sets the Inventory panel.
    public GameObject JournalPanel; // sets the journal panel
    public InventorySlot[] itemsSlots; // The UI for the item slots.
    //public InventorySlot[] toolSlots; // The UI for the tool slots.
    public Image guiEquipSlot; // Sets the currently equipped tool in the GUI.
    public EquippedSlot toolEquippedSlot;
    public EquippedSlot itemEquippedSlot;

    // Information for the items in the info box.
    public Text itemNameText;
    public Text itemDescriptionText;

    public Text timeText;
    public Text dateText;

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
        TimeController.Instance.InitTracker(this);
    }

    public void DisplayInventory()
    {
        //ItemSlotData[] invToolSlots = InventoryManager.Instance.GetInventorySlots(InventorySlot.InventoryCategory.Tools);
        ItemSlotData[] invItemSlots = InventoryManager.Instance.GetInventorySlots(InventorySlot.InventoryCategory.Items);
        RenderInventoryPanel(invItemSlots, itemsSlots);
        //RenderInventoryPanel(invToolSlots, toolSlots);
        //toolEquippedSlot.Show(InventoryManager.Instance.GetEquippedSlot(InventorySlot.InventoryCategory.Tools));
        itemEquippedSlot.Show(InventoryManager.Instance.GetEquippedSlot(InventorySlot.InventoryCategory.Items));

        ItemData equipTool = InventoryManager.Instance.GetEquippedSlotItem(InventorySlot.InventoryCategory.Tools);
        if (equipTool != null)
        {
            guiEquipSlot.sprite = equipTool.thumbnail;
            guiEquipSlot.gameObject.SetActive(true);
            return;
        }
        guiEquipSlot.gameObject.SetActive(false);
    }

    void RenderInventoryPanel(ItemSlotData[] items, InventorySlot[] uiSlots)
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
        for (int i = 0; i < itemsSlots.Length; i++)
        {
            //toolSlots[i].SetIndex(i);
            itemsSlots[i].SetIndex(i);
        }
    }

    public void ClockUpdate(GameTimeConverter gametime)
    {
        int hours = gametime.hour;
        int minutes = gametime.minute;
        timeText.text = hours.ToString("00") + ":" + minutes.ToString("00");

        int day = gametime.day;
        string month = gametime.month.ToString();
        string weekDay = gametime.GetWeekDay().ToString();
        dateText.text = month + " " + day + " (" + weekDay + ")"; 
    }
}
