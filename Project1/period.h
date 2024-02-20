#include <iostream>
using namespace std;

void displayCalendar(int year, int month)
{
    int daysInMonth;
    for (int i = 0; i < 12; i++)
    {
        if (i == 1 && i == 3 && i == 5 && i == 7 && i == 9 && i == 11)
        {
            daysInMonth = 31;
        }
        if (i == 4 && i == 6 && i == 8 && i == 10)
        {
            daysInMonth = 30;
        }
        if (i == 2)
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
}