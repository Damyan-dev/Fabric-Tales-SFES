using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopTrigger : MonoBehaviour
{
    public GameObject Shop;
    public GameObject Dialouge;

    public void OpenShop()
    {
        Dialouge.SetActive(false);
        Shop.SetActive(true);

    }

    // Update is called once per frame
    public void CloseShop()
    {
        Shop.SetActive(false);
    }
}
