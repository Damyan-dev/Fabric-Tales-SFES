using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : InventoryManager
{

    public Transform[] spawnPoints;
    public GameObject[] cotton;
    public GameObject canvasObject;
    //public int startSpawnTime = 10;
    //public int spawnTime = 5;

    // Use this for initialization
    void Start()
    {
        // Call the Spawn function after a delay of the spawnTime and then continue to call after the same amount of time.
        // InvokeRepeating("Spawn", startSpawnTime, spawnTime);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown("f"))
        {

            if (canvasObject.activeSelf)
            {
                StartCoroutine(DelayedSpawn());
            }
        }
    }

    public void Spawn()
    {
        // Find a random index between zero and one less than the number of spawn points.
        int spawnPoints = Random.Range(0, 1);
        int cotton = Random.Range(0, 1);

        // Create an instance of the enemy prefab at the randomly selected spawn point's position and rotation.
        Instantiate(this.cotton[cotton], this.spawnPoints[spawnPoints].position, this.spawnPoints[spawnPoints].rotation);
    }

    private IEnumerator DelayedSpawn()
    {
        yield return new WaitForSeconds(5);
        Spawn();
        
        // for (int i = 0, i < inventorySlotIndex, i++)
        // {
        //   if (itemData.GetComponent<Description> == ("This is a harvested cotton bud."))
        //   {
        //       yield return new WaitForSeconds(5);
        //      Spawn();
        //  }

        //  }

    }
}
    // public GameObject cotton;
    //  private Vector3 ItemPos;

    //public void InstantiateItem()
    //  {
    //     Instantiate(cotton, ItemPos, Quaternion.Euler(ItemPos));
    //     TurretPos.y += cotton.transform.localScale.y;
    // }

    //  void SpawnNext()
    // {
    //   GameObject cotton = Instantiate(gameobject);
    //  Character.transform.position = new Vector3(position.x, position.y + transform.localScale.y / 2, position.z);
    //}



