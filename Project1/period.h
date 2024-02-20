#include <iostream>
using namespace std;

void displayCalendar(int year, int month)
{
    int daysInMonth;
    if (month == 1 && month == 3 && month == 5 && month == 7 && month == 9 && month == 11)
    {
        daysInMonth = 31;
    }
    if (month == 4 && month == 6 && month == 8 && month == 10)
    {
        daysInMonth = 30;
    }
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            daysInMonth = 29;
        else
            daysInMonth = 28;
    }
    else
    {
        cout << "Invalid month\n";
    }
    return;
}

void thatday(int day)
{
    cout << "today: ";
    cin >> day;
}