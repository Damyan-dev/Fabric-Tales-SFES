using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CropParams : MonoBehaviour
{
    InteractableObject seedToGrow;
    public GameObject seed;
    private GameObject seedling;
    private GameObject harvestable;
    private AudioController audioController;
    int growth;
    int maxGrowth;
    int growthFertlized;
    int maxGrowthFertlized;
    public enum CropState
    {
        Seed, Seedling, Harvestable
    }
    public CropState cropState;


    public void Start()
    {
        audioController = GameObject.Find("GameManager").GetComponent<AudioController>();
    }

    public void Plant(InteractableObject seedToGrow)
    {
        this.seedToGrow = seedToGrow;

        seedling = Instantiate(seedToGrow.seedling, transform);
        harvestable = Instantiate(seedToGrow.harvestable, transform);

        int hoursToGrow = GameTimeConverter.ConvertDaysToHours(seedToGrow.timeToGrow);
        maxGrowth = GameTimeConverter.ConvertHoursToMins(hoursToGrow);

        SwitchState(CropState.Seed);
    }

    public void PlantFertilized(InteractableObject seedToGrow)
    {
        this.seedToGrow = seedToGrow;

        seedling = Instantiate(seedToGrow.seedling, transform);
        harvestable = Instantiate(seedToGrow.harvestable, transform);

        int hoursToGrowFertilized = GameTimeConverter.ConvertDaysToHours(seedToGrow.timeToGrow);
        maxGrowthFertlized = GameTimeConverter.ConvertHoursToMins(hoursToGrowFertilized);

        SwitchState(CropState.Seed);
    }

    public void Grow()
    {
        
        growth++;

        if(growth >= maxGrowth/4 && cropState == CropState.Seed)
        {
            SwitchState(CropState.Seedling);
        }

        if(growth >= maxGrowth/2 && cropState == CropState.Seedling)
        {
            SwitchState(CropState.Harvestable);
            audioController.PlaySoundComplete("Finished");
        }
    }

    public void GrowFertilized()
    {

        growthFertlized++;

        if (growthFertlized >= maxGrowthFertlized / 6 && cropState == CropState.Seed)
        {
            SwitchState(CropState.Seedling);
        }

        if (growthFertlized >= maxGrowthFertlized / 4 && cropState == CropState.Seedling)
        {
            SwitchState(CropState.Harvestable);
            audioController.PlaySoundComplete("Finished");
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
                harvestable.transform.parent = null;
                //Destroy(gameObject);
                break;
        }

        cropState = stateToSwitch;
    }
}
