using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarnTrigger : MonoBehaviour
{

    public GameObject barnOutside = null;
    public GameObject canvasObject;

    // Start is called before the first frame update
    void Start()
    {
        canvasObject.SetActive(false);
    }

    private void OnTriggerEnter(Collider col)
    {
        if (col.tag == "Player")
        {
            Debug.Log("entered");
          //  canvasObject.SetActive(true);
        }
    }

    private void OnTriggerStay(Collider col)
    {
        if (col.tag == "Player")
        {
            barnOutside.SetActive(false);
            canvasObject.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider col)
    {
        if (col.tag == "Player")
        {
            barnOutside.SetActive(true);
            canvasObject.SetActive(false);
        }
    }

}
