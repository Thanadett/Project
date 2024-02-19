#include "menstrual_cycle.h"

// Function to count menstrual cycle basics
MenstrualCycle countMenstrualCycleBasics(int last_period_start_day, int current_day)
{
    MenstrualCycle cycle;

    // Calculate the length of the cycle by subtracting the start day of the last period from the current day
    cycle.cycle_length = current_day - last_period_start_day;

    // Assume a typical menstrual period length of 5 days
    cycle.period_length = 5;

    return cycle;
}