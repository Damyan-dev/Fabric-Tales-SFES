using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class InventorySlot : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public InteractableObject item;

    public void SetUI(InteractableObject item)
    {
        this.item = item;

        if (item != null && item.quantity > 0)
        {
            GetComponent<Image>().overrideSprite = item.thumbnail;
            GetComponentInChildren<Text>().text = item.quantity.ToString();
        }
        else
        {
            GetComponent<Image>().overrideSprite = null;
            GetComponentInChildren<Text>().text = "";
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        Inventory.Instance.ShowItemDescription(item);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        Inventory.Instance.ShowItemDescription(null);
    } 

  
}
