using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WashingMachine : MonoBehaviour
{           
    //public Spawner spawner;
 
    public GameObject selected;
  //  public GameObject cotton[1];

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

    public void Spawn()
    {
           int spawnPoints = Random.Range(0, 1);
           int cotton = Random.Range(0, 1);

           // Instantiate(this.cotton[cotton], this.spawnPoints[spawnPoints].position, this.spawnPoints[spawnPoints].rotation); ;
    }


    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
           
            selected.SetActive(false);
            
        }
    }
}
    

