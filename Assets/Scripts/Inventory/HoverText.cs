using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class HoverText : MonoBehaviour
{
    public Image img;
    public GameObject Info;

    void Start()
    {
        Info.SetActive(false);
        img.enabled = false; 
    }

    // Update is called once per frame
    public void OnPointerEnter(BaseEventData eventData)
    {
        Info.SetActive(true);
        img.enabled = true;
    }

    public void OnPointerExit(BaseEventData eventData)
    {
        Info.SetActive(false);
        img.enabled = false;
    }
}
