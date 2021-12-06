using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MachineController : MonoBehaviour
{
    Animator anim;
    WashingMachine machine;

    // Start is called before the first frame update
    void Start()
    {
        machine = GetComponent<WashingMachine>();
        anim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey (KeyCode.F))
        {
            anim.SetInteger("ConditionA", 1); ;
        }
        if (Input.GetKey(KeyCode.G))
        {
            anim.SetInteger("Condition", 1); ;
        }
    }
}