using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SheepAnimTrigger : MonoBehaviour
{

    // Start is called before the first frame update
    public Sheep1 sheep;

    [SerializeField] private Animator anim;
    
    private void OnTriggerEnter(Collider col)
    {
        if (col.CompareTag("Player"))
        {
            anim.Play("SheepShake", 0, 0.0f);
        }
    }

    private void OnTriggerExit(Collider col)
    {
        if (col.CompareTag("Player"))
        {
            anim.Play("Idle", 0, 0.0f);
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
