using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchTabs : MonoBehaviour
{

    public GameObject ShopkeeperCanvas;
    public GameObject ShopCanvas;
    public GameObject MaterialsTab;
    public GameObject CropsTab;
    public GameObject FarmTab;
    public GameObject SeedTab;
    public GameObject ClothesTab;


    public void ShopkeeperOn()
    {
        ShopkeeperCanvas.SetActive(true);
        ShopCanvas.SetActive(false);
    }
    public void ShopkeeperOff()
    {
        ShopkeeperCanvas.SetActive(false);
        ShopCanvas.SetActive(true);
    }

    public void MaterialTabOn()
    {
        MaterialsTab.SetActive(true);
        CropsTab.SetActive(false);
        FarmTab.SetActive(false);
        SeedTab.SetActive(false);
    }
    public void MaterialTabOff()
    {
        MaterialsTab.SetActive(false);
    }
    public void CropsTabOn()
    {
        CropsTab.SetActive(true);
        MaterialsTab.SetActive(false);
        FarmTab.SetActive(false);
        SeedTab.SetActive(false);
    }
    public void CropsTabOff()
    {
        CropsTab.SetActive(false);
    }
    public void FarmTabOn()
    {
        FarmTab.SetActive(true);
        MaterialsTab.SetActive(false);
        CropsTab.SetActive(false);
        SeedTab.SetActive(false);
    }
    public void FarmTabOff()
    {
        FarmTab.SetActive(false);
    }
    public void SeedsTabOn()
    {
        SeedTab.SetActive(true);
        MaterialsTab.SetActive(false);
        CropsTab.SetActive(false);
        FarmTab.SetActive(false);
    }
    public void SeedsTabOff()
    {
        SeedTab.SetActive(false);
    }
    public void ClothesTabOn()
    {
        ClothesTab.SetActive(true);
        CropsTab.SetActive(false);
        FarmTab.SetActive(false);
        SeedTab.SetActive(false);
        MaterialsTab.SetActive(false);
    }
    public void CloseTabs()
    {
        CropsTab.SetActive(false);
        FarmTab.SetActive(false);
        SeedTab.SetActive(false);
        MaterialsTab.SetActive(false);
        ClothesTab.SetActive(false);
    }

}
