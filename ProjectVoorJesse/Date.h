#pragma once
#include <string>

class Date
{
public:
    Date(int aDay = 0, int aMonth = 0, int aYear = 0);
    void SetDate(int aDay, int aMonth, int aYear);

    int getYear();
    int getMonth();
    int getDay();
    std::string getDate();

private:
    int year;
    int month;
    int day;
    std::string output;

protected:
};