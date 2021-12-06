using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Loom : Spawner
{
    public Spawner spawner;
    public GameObject canvasObject;
    public GameObject selected;


    public void Start()
    {
        canvasObject.SetActive(false);
        selected.SetActive(false);

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            canvasObject.SetActive(true);
            selected.SetActive(true);

        }
        if (Input.GetKeyDown("f"))
        {

            int spawnPoints = Random.Range(0, 1);
            int cotton = Random.Range(0, 1);

            // Create an instance of the enemy prefab at the randomly selected spawn point's position and rotation.
            Instantiate(this.cotton[cotton], this.spawnPoints[spawnPoints].position, this.spawnPoints[spawnPoints].rotation); ;

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
