using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Items/Equipment")]
public class ItemEquipment : ItemData
{
    public enum Tool
    {
        WateringCan
    }

    public Tool tool;
}
