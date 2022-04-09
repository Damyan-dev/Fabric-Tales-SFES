using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    ItemData itemToShow;
    public int invSlotIndex;

    public Image itemDisplayImage;

    public enum InventoryCategory
    {
        Items, Tools
    }

    public InventoryCategory inventoryCategory;
    public void Show(ItemData itemToShow)
    {
        if (itemToShow != null)
        {
            itemDisplayImage.sprite = itemToShow.thumbnail;
            this.itemToShow = itemToShow;
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
