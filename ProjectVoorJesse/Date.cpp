#include "Date.h"
#include <iostream>
#include <chrono>
#include <ctime>  




    Date::Date(int aDay, int aMonth, int aYear)
    {
        SetDate(year, month, day);
    }

    void Date::SetDate(int aDay, int aMonth, int aYear)
    {
        day = aDay;
        month = aMonth;
        year = aYear;
    }

    int Date::getYear()
    {
        return year;
    }

    int Date::getMonth()
    {
        return month;
    }

    int Date::getDay()
    {
        return day;
    }

    std::string Date::getDate()
    {
        return output;
    }
