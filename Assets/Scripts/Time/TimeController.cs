using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeController : MonoBehaviour
{
    public static TimeController Instance { get; private set; }
    public float timeScale = 1.0f;

    [SerializeField]
    GameTimeConverter gametime;

    public Transform sunTransform;

    List<ITimeTracker> listeners = new List<ITimeTracker>();

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
            DontDestroyOnLoad(this);
        }
    }

    private void Start()
    {
        gametime = new GameTimeConverter(2022, GameTimeConverter.Month.Jan, 1, 8, 0);
        StartCoroutine(UpdateTime());
    }

    IEnumerator UpdateTime()
    {
        while (true)
        {
            Tick();
            yield return new WaitForSeconds(1/timeScale);
        }
    }

    public void Tick()
    {
        gametime.AdvanceTime();

        foreach (ITimeTracker listener in listeners)
        {
            listener.ClockUpdate(gametime);
        }

        // Converts the current in-game time to minutes.
        int timeInMins = GameTimeConverter.ConvertHoursToMins(gametime.hour) + gametime.minute;
        float sunAngle = 0.25f * timeInMins - 90;
        sunTransform.eulerAngles = new Vector3(sunAngle, 0, 0);
    }

    public GameTimeConverter GetTimeStamp()
    {
        return new GameTimeConverter(gametime);     
    }

    public void InitTracker(ITimeTracker listener)
    {
        listeners.Add(listener);
    }

    public void UninitTracker(ITimeTracker listener)
    {
        listeners.Remove(listener);
    }
}
