#ifndef PERIOD_COUNT_H
#define PERIOD_COUNT_H

#include <stdio.h>

// Function to count the number of periods in a string
int count_periods(const char str)
{
    int count = 0;
    while (str != '\0')
    {
        if (*str == '.')
        {
            count++;
        }
        str++;
    }
    return count;
}

#endif // PERIOD_COUNT_H