#include <iostream>
using namespace std;

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
        cout << "Invalid month\n";
        return 0;
    }
}

void thatdays(int day, int month, int year, int& thatday, int& thatmonth, int& thatyear)
{
    if (thatday < months(year, month))
    {
        thatday = day + 28;
        thatmonth = month;
        thatyear = year;
    }
    if (thatday > months(year, month) && month != 12)
    {
        thatday = abs((months(year, month) - thatday));
        thatmonth = month++;
        thatyear = year;
    }
    if (thatday > months(year, month) && month == 12)
    {
        thatday = abs((months(year, month) - thatday));
        thatmonth = 1;
        thatyear = year + 1;
    }
}
