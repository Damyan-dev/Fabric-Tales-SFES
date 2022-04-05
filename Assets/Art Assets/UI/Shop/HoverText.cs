using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class HoverText : MonoBehaviour
{
    public GameObject img;
    public GameObject Info;
    public GameObject shopkeeperText;

    void Start()
    {
        Info.SetActive(false);
        img.SetActive(false);
    }

    // Update is called once per frame
    public void OnPointerEnter(BaseEventData eventData)
    {
        Info.SetActive(true);
        img.SetActive(true);
        shopkeeperText.SetActive(false);
    }

    public void OnPointerExit(BaseEventData eventData)
    {
        Info.SetActive(false);
        img.SetActive(false);
        shopkeeperText.SetActive(true);
    }
}
