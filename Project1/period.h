#include <iostream>

int months(int year, int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return 29;
        else
            return 28;
    }
    else
    {
        std::cout << "Invalid month\n";
        return 0;
    }
}

void thatdays(int day, int month, int year, int& thatday, int& thatmonth, int& thatyear)
{
    thatday = day + 28;
    thatmonth = month;
    thatyear = year;

    int daysInMonth = months(year, month);
    while (thatday > daysInMonth)
    {
        thatday -= daysInMonth;
        ++thatmonth;
        if (thatmonth > 12)
        {
            thatmonth = 1;
            ++thatyear;
        }
        daysInMonth = months(thatyear, thatmonth);
    }
}
