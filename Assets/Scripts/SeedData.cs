using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CreateAssetMenu(menuName = "Items/Seeds")]
public class SeedData : ItemData
{
    public int timeToGrow;
    public ItemData cropToHarvest;
    public GameObject seedling;
}
