using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Loom : MonoBehaviour
{ 
    public GameObject selected;


    public void Start()
    {
        selected.SetActive(false);
    }

    private void OnTriggerEnter(Collider other)
    {

        if (other.CompareTag("Player"))
        {
            selected.SetActive(true);

        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            selected.SetActive(false);

        }
    }

    internal void Spawn()
    {
        throw new NotImplementedException();
    }
}


