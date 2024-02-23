// Calories.h
#pragma once

class CaloriesCalculator {
    double carbs;
    double protein;
    double fat;
public:
    CaloriesCalculator(double _carbs, double _protein, double _fat)
        : carbs(_carbs), protein(_protein), fat(_fat) {}

    double GetTotalCalories(double carbs_quantity, double protein_quantity, double fat_quantity) const {
        // คำนวณแคลอรี่
        double total_calories = (carbs * carbs_quantity) +
            (protein * protein_quantity) +
            (fat * fat_quantity);

        return total_calories;
    }
};