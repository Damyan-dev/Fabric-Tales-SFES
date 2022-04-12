using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CropInteractionMenu : MonoBehaviour
{
    private Animator anim;
    Farmland farmLand;

    public void Start()
    {
        anim = GetComponent<Animator>();
    }

  
    public void Fertilize()
    {

    }

    public void PlantCotton()
    {
        farmLand.CottonSeed();
    }

    public void PlantElderberry()
    {

    }

    public void PlantTumeric()
    {

    }
}
