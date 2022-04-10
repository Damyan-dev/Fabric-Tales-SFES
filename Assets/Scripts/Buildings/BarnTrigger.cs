using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarnTrigger : MonoBehaviour
{

    public GameObject barnOutside = null;

    private void OnTriggerEnter(Collider col)
    {
        if (col.tag == "Player")
        {
            Debug.Log("entered");
            barnOutside.SetActive(false);
        }
    }

    private void OnTriggerExit(Collider col)
    {
        if (col.tag == "Player")
        {
            barnOutside.SetActive(true);
        }
    }

}
