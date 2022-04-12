using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CropParams : MonoBehaviour
{
    InteractableObject seedToGrow;
    public GameObject seed;
    private GameObject seedling;
    private GameObject harvestable;
    int growth;
    int maxGrowth;
    public enum CropState
    {
        Seed, Seedling, Harvestable
    }
    public CropState cropState;


    

    public void Plant(InteractableObject seedToGrow)
    {
        this.seedToGrow = seedToGrow;

        seedling = Instantiate(seedToGrow.seedling, transform);
        harvestable = Instantiate(seedToGrow.harvestable, transform);

        int hoursToGrow = GameTimeConverter.ConvertHoursToMins(seedToGrow.timeToGrow);
        maxGrowth = GameTimeConverter.ConvertHoursToMins(hoursToGrow);

        SwitchState(CropState.Seed);
    }

    public void Grow()
    {
        growth++;

        if(growth >= maxGrowth/2 && cropState == CropState.Seed)
        {
            SwitchState(CropState.Seedling);
        }

        if(growth >= maxGrowth && cropState == CropState.Seedling)
        {
            SwitchState(CropState.Harvestable);
        }
    }

    void SwitchState(CropState stateToSwitch)
    {
        seed.SetActive(false);
        seedling.SetActive(false);
        harvestable.SetActive(false);

        switch (stateToSwitch)
        {
            case CropState.Seed:
                seed.SetActive(true);
                break;
            case CropState.Seedling:
                seedling.SetActive(true);
                break;
            case CropState.Harvestable:
                harvestable.SetActive(true);
                //harvestable.transform.parent = null;
                //Destroy(gameObject);
                break;
        }

        cropState = stateToSwitch;
    }
}
