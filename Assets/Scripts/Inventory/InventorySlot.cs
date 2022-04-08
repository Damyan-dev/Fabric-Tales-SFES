using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    ItemData itemToShow;
    public int invSlotIndex;
    int quantity;

    public Image itemDisplayImage;
    public Text quantityText;

    public enum InventoryCategory
    {
        Items, Tools
    }

    public InventoryCategory inventoryCategory;
    public void Show(ItemSlotData itemSlot)
    {
        itemToShow = itemSlot.itemData;
        quantity = itemSlot.quantity;

        quantityText.text = "";

        if (itemToShow != null)
        {
            itemDisplayImage.sprite = itemToShow.thumbnail;

            if (quantity > 1)
            {
                quantityText.text = quantity.ToString();
            }

            itemDisplayImage.gameObject.SetActive(true);
            return;
        }
        itemDisplayImage.gameObject.SetActive(false);
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        UIController.Instance.ShowItemInfo(itemToShow);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        UIController.Instance.ShowItemInfo(null);
    }

    // Ensures that the OnPointerClick function is overridable.
    /*public virtual void OnPointerClick(PointerEventData eventData)
    {
        InventoryManager.Instance.InventoryToEquipped(invSlotIndex, inventoryCategory);
    } */

    public void SetIndex(int invSlotIndex)
    {
        this.invSlotIndex = invSlotIndex;
    }
}
