#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Medicine
{
    std::string name;
    std::string indication;
    std::string dosage;
    std::string time;
};

std::vector<Medicine> loadFile(const std::string& filename)
{
    std::vector<Medicine> meds;
    std::ifstream file(filename);
    std::string data;
    while (std::getline(file, data))
    {
        Medicine med;
        size_t pos = 0;
        for (int i = 0; i < 4; i++)
        {
            pos = data.find(";");
            switch (i)
            {
            case 0:
                med.name = data.substr(0, pos);
                break;
            case 1:
                med.indication = data.substr(0, pos);
                break;
            case 2:
                med.dosage = data.substr(0, pos);
                break;
            case 3:
                med.time = data.substr(0, pos);
                break;
            }
            data.erase(0, pos + 1);
        }
        meds.push_back(med);
    }
    file.close();
    return meds;
}

std::vector<Medicine> findMed(const std::string& userIndication, const std::vector<Medicine>& meds)
{
    std::vector<Medicine> foundMedicines;
    for (const Medicine& med : meds)
    {
        if (med.indication.find(userIndication) != std::string::npos)
        {
            foundMedicines.push_back(med);
        }
    }
    return foundMedicines;
}
