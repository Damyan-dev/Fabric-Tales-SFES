using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Farmland : MonoBehaviour, ITimeTracker
{
    public GameObject selected;
    public Transform dropPosition;
    public Material dirtMat, farmMat, wateredMat;
    public GameTimeConverter timeWatered;
    

    public enum FarmStatus
    {
        Dirt, Farm, Watered
    }
    public FarmStatus farmStatus;

    private new Renderer renderer;

    [Header("Crops")]
    public GameObject cropPrefab;
    CropParams cropPlanted = null;


    void Start()
    {
        renderer = GetComponent<Renderer>();
        ChangeFarmStatus(FarmStatus.Dirt);
        Selected(false);
        TimeController.Instance.InitTracker(this);
    }

    public void ChangeFarmStatus(FarmStatus farmToSwitch)
    {
        farmStatus = farmToSwitch;
        Material materialToSwitch = dirtMat;

        switch (farmToSwitch)
        {
            case FarmStatus.Dirt:
                materialToSwitch = dirtMat;
                break;
            case FarmStatus.Farm:
                materialToSwitch = farmMat;
                break;
            case FarmStatus.Watered:
                materialToSwitch = wateredMat;

                timeWatered = TimeController.Instance.GetTimeStamp();
                break;
        }

        renderer.material = materialToSwitch;
    }

    public void Selected(bool toggle)
    {
        selected.SetActive(toggle);
    }

    public void Interact()
    {
        ItemData toolSlot = InventoryManager.Instance.equippedTool;
        ItemEquipment equippedEquipment = toolSlot as ItemEquipment;

        if(equippedEquipment != null)
        {
            ItemEquipment.Tool tool = equippedEquipment.tool;

            switch (tool)
            {
                case ItemEquipment.Tool.WateringCan:
                    ChangeFarmStatus(FarmStatus.Watered);
                    break;
            }

            return;
        }
        ItemData itemSlot = InventoryManager.Instance.equippedItem;
        SeedData seedTool = toolSlot as SeedData;

        if(seedTool != null && farmStatus == FarmStatus.Dirt && cropPlanted == null)
        {
            GameObject cropObject = Instantiate(cropPrefab, transform);
            cropPlanted = cropObject.GetComponent<CropParams>();
            cropPlanted.Plant(seedTool);
            Debug.Log(cropPlanted + " has been planted.");
        }
    }

    public void ClockUpdate(GameTimeConverter gametime)
    {
        if(farmStatus == FarmStatus.Watered)
        {
            int hoursPassed = GameTimeConverter.CompareTime(timeWatered, gametime);
            Debug.Log(hoursPassed + " since the crop was watered.");

            if(hoursPassed > 24)
            {
                ChangeFarmStatus(FarmStatus.Farm);
            }
        }
    }
}
