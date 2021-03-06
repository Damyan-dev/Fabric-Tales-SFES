using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ArrowsScroll : MonoBehaviour
{
    public GameObject Button1;
    public GameObject Button2;
    public GameObject Button3;
    public GameObject Button4;
    public GameObject Button5;
    public GameObject Button6;

    void Start()
    {
        Button1.SetActive(true);
        Button2.SetActive(true);
        Button3.SetActive(true);
        Button4.SetActive(false);
        Button5.SetActive(false);
        Button6.SetActive(false);
    }

    // Update is called once per frame
    public void DownArrow()
    {
        Button1.SetActive(false);
        Button2.SetActive(false);
        Button3.SetActive(false);
        Button4.SetActive(true);
        Button5.SetActive(true);
        Button6.SetActive(true);
    }

    public void UpArrow()
    {
        Button1.SetActive(true);
        Button2.SetActive(true);
        Button3.SetActive(true);
        Button4.SetActive(false);
        Button5.SetActive(false);
        Button6.SetActive(false);
    }
}
