using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddRemoveMoney : MonoBehaviour
{
    public GameObject camera;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void Subtract10()
    {
            camera.GetComponent<playerMoney>().subtractMoney(10);
    }
    public void Add10()
    {
        camera.GetComponent<playerMoney>().addMoney(10);
    }
    // Update is called once per frame
    // void Update()
    // {
    //    /if(x)
    //      {
    //     camera.GetComponent<playerMoney>().addMoney(10);
    //    }
    // }
}
