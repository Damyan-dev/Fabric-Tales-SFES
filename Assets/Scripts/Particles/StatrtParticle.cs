using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatrtParticle : MonoBehaviour

{
    public ParticleSystem MyParticleSystem;
    public ParticleSystem Droplets;

    public void StartParticles()
    {
            MyParticleSystem.Play();
    
    }

    public void StartDroplets()
    {
        Droplets.Play();

    }
}
