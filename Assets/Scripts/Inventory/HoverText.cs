using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class HoverText : MonoBehaviour
{

    public GameObject Info;

    void Start()
    {
        Info.SetActive(false);
    }

    // Update is called once per frame
    public void OnPointerEnter(BaseEventData eventData)
    {
        Info.SetActive(true);
    }

    public void OnPointerExit(BaseEventData eventData)
    {
        Info.SetActive(false);
    }
}
