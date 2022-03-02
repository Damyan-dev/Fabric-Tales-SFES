using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameTimeConverter
{
    public Month month;
    public enum Month
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        June,
        Jul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    }

    public WeekDay weekDays;
    public enum WeekDay
    {
        SUN,
        MON,
        TUE,
        WED,
        THUR,
        FRI,
        SAT
    }

    public int day;
    public int year;
    public int hour;
    public int minute;

    // Constructor
    public GameTimeConverter(int year, Month month, int day, int hour, int minute)
    {
        this.year = year;
        this.month = month;
        this.day = day;
        this.hour = hour;
        this.minute = minute;
    }

    public void AdvanceTime()
    {
        minute++;

        if(minute >= 60)
        {
            minute = 0;
            hour++;
        }

        if(hour >= 24)
        {
            hour = 0;
            day++;
        }

        if(day > 30)
        {
            day = 1;
            if(month == Month.Dec)
            {
                month = Month.Jan;
                year++;
            }
            else
            {
                month++;
            }
        }

    }

    public WeekDay GetWeekDay()
    {
        int dayPassed = ConvertYearsToDays(year) + ConvertMonthsToDays(month) + day;
        int dayIndex = dayPassed % 7;
        return (WeekDay)dayIndex;
    }

    public static int ConvertHoursToMins(int hour)
    {
        return hour * 60;
    }

    public static int ConvertDaysToHours(int day)
    {
        return day * 24;
    }

    public static int ConvertMonthsToDays(Month month)
    {
        int monthIndex = (int)month;
        return monthIndex * 30;
    }

    public static int ConvertYearsToDays(int year)
    {
        return year * 12 * 30;
    }
}
