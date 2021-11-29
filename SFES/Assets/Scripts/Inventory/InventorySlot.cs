using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    ItemData itemToShow;

    public Image itemDisplayImage;
    // Start is called before the first frame update
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
}
