using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToolSwitcher : MonoBehaviour
{
    public GameObject Tool1;
    public GameObject Tool2;
    void Start()
    {
        Tool1.SetActive(false);
        Tool2.SetActive(false);
    }
    public void Harvest()
    {
        Tool1.SetActive(false);
        Tool2.SetActive(false);
    }
    public void Water()
    {
        Tool1.SetActive(true);
        Tool2.SetActive(false);
    }
    public void Fix()
    {
        Tool1.SetActive(false);
        Tool2.SetActive(true);
    }
}
