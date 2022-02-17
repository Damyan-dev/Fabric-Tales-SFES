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

    public void Subtract25()
    {
        camera.GetComponent<playerMoney>().subtractMoney(25);
    }
    public void Subtract100()
    {
        camera.GetComponent<playerMoney>().subtractMoney(100);
    }
    public void Add10()
    {
        camera.GetComponent<playerMoney>().addMoney(10);
    }
}
