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
        GetComponent<Image>().overrideSprite = item.thumbnail;
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
