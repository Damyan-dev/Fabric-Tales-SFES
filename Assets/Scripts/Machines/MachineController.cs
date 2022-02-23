using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MachineController : MonoBehaviour
{
    Animator anim;
    WashingMachine machine;
    Loom machine2;

    // Start is called before the first frame update
    void Start()
    {
        machine = GetComponent<WashingMachine>();
        machine2 = GetComponent<Loom>();
        anim = GetComponent<Animator>();
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (Input.GetKey(KeyCode.F))
            {
                anim.SetInteger("ConditionA", 1); ;
              
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        anim.SetInteger("ConditionA", 0); ;
         
    }
}