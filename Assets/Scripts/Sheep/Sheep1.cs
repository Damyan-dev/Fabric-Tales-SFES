using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Sheep1 : Spawner
{
    public Spawner spawner;
    //public GameObject canvasObject;
    public GameObject selected;
 

    public void Start()
    {
       // canvasObject.SetActive(false);
        selected.SetActive(false);
    }

    private void OnTriggerEnter(Collider other)
    {

        if (other.CompareTag("Player"))
        {
            canvasObject.SetActive(true);
            selected.SetActive(true);

        }
    }


    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            canvasObject.SetActive(false);
            selected.SetActive(false);

        }
    }
}