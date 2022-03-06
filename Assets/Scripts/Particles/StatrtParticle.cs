using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatrtParticle : MonoBehaviour

{
    public ParticleSystem MyParticleSystem;
  
    public void StartParticles()
    {
            MyParticleSystem.Play();
    
    }
}
