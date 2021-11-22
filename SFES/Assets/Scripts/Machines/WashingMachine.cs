using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WashingMachine : Spawner
{           
    public Spawner spawner;
    public GameObject canvasObject;

    public void Start()
    {
        canvasObject.SetActive(false);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            canvasObject.SetActive(true);

        }
        if (Input.GetKeyDown("f"))
        {
            Spawn();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            canvasObject.SetActive(false);

        }
        if (Input.GetKeyDown("f"))
        {
            Spawn();
        }
    }
   }
