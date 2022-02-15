using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatrtParticle : MonoBehaviour

{
    public ParticleSystem MyParticleSystem;
  
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            MyParticleSystem.Play();
        }
        
    }
}
