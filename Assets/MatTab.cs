using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MatTab : MonoBehaviour
{
    public GameObject Button1;
    public GameObject Button2;
    public GameObject Button3;
    public GameObject SellCanvas;
    public GameObject BuyCanvas;


    void Start()
    {
        Button1.SetActive(true);
        Button2.SetActive(true);
        Button3.SetActive(false);
        SellCanvas.SetActive(false);
       
    }

    // Update is called once per frame
    public void SellTab()
    {
        SellCanvas.SetActive(true);
        BuyCanvas.SetActive(false);
        Button1.SetActive(false);
        Button2.SetActive(false);
        Button3.SetActive(true);
    }

    public void BuyTab()
    {
        BuyCanvas.SetActive(true);
        SellCanvas.SetActive(false);
        Button1.SetActive(true);
        Button2.SetActive(true);
        Button3.SetActive(false);
    }
}