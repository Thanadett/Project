#include <iostream>
#include <string>
#include <fstream>
#include <vector>

struct BMI
{
    std::string name;
    float height;
    float weight;
    float BMI;
};

float CalculateBMI(float h, float w)
{
    float SqrtOfHeight = h * h;
    float BMI = w / SqrtOfHeight;
    return BMI;
}

std::string Bmi_report(float a)
{
    if (a < 18.5)
    {
        return "you are underweight";
    }
    else if (a > 18.5 && a < 24.9)
    {
        return "Congrats! You are healthy";
    }
    else if (a > 25 && a < 29.9)
    {
        return "You are overweight";
    }
    else if (a > 30)
    {
        return "You are Obese";
    }
}

void saveData(const std::string& name, float height, float weight, float bmi)
{
    std::ofstream file("historybmi.txt", std::ios_base::app);
    file << name << ";" << height << ";" << weight << ";" << bmi << ";" << std::endl;
    file.close();
}

std::vector<BMI> loadFile()
{
    std::vector<BMI> data;
    std::ifstream file("historybmi.txt");
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            BMI bmiData;
            size_t pos = 0;
            for (int i = 0; i < 4; ++i)
            {
                pos = line.find(";");
                std::string text = line.substr(0, pos);
                switch (i)
                {
                case 0:
                    bmiData.name = text;
                    break;
                case 1:
                    bmiData.height = std::stof(text);
                    break;
                case 2:
                    bmiData.weight = std::stof(text);
                    break;
                case 3:
                    bmiData.BMI = std::stof(text);
                    break;
                }
                line.erase(0, pos + 1);
            }
            data.push_back(bmiData);
        }
        file.close();
    }
    return data;
}