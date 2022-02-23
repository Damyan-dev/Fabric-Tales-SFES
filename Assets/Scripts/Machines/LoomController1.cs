using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoomController1 : MonoBehaviour
{
    Animator anim;
    Loom machine;


    // Start is called before the first frame update
    void Start()
    {
        machine = GetComponent<Loom>();

        anim = GetComponent<Animator>();
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (Input.GetKey(KeyCode.F))
            {
                anim.SetInteger("ConditionB", 1); ;

            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        anim.SetInteger("ConditionB", 0); ;

    }
}