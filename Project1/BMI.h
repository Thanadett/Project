#include <iostream>
#include <string>
#include <fstream>
using namespace std;

float CalculateBMI(float h, float w) {
    float SqrtOfHeight = h * h;
    float BMI = w / SqrtOfHeight;
    return BMI;

}
string Bmi_report(float a) {
    if (a < 18.5) {
        return "you are underweight";
    }
    else if (a > 18.5 && a < 24.9) {
        return "Congrats! You are healthy";
    }
    else if (a > 25 && a < 29.9) {
        return "You are overweight";
    }
    else if (a > 30) {
        return "You are Obese";
    }
}

int main() {
    ofstream savefile("Bmi_history.txt", ios::app);
    float x, y; 
    cin >> x >> y;
    float hm = x / 100; 
    float Bmical = CalculateBMI(hm, y);
    cout << Bmi_report(Bmical);
    savefile << hm << " " << y << " " << Bmical << " " << Bmi_report(Bmical);
    savefile.close();
    return 0;
}
