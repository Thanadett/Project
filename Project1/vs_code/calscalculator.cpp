#include <iostream>
using namespace std;

int main()
{
    // ประกาศตัวแปร
    double carbs = 4;
    double protein = 4;
    double fat = 8;
    double carbs_quantity, protein_quantity, fat_quantity;

    // รับข้อมูลจากผู้ใช้

    cout << "ป้อนปริมาณคาร์โบไฮเดรต (กรัม): ";
    cin >> carbs_quantity;

    cout << "ป้อนปริมาณโปรตีน (กรัม): ";
    cin >> protein_quantity;

    cout << "ป้อนปริมาณไขมัน (กรัม): ";
    cin >> fat_quantity;

    // คำนวณแคลอรี่
    double total_calories = (carbs * carbs_quantity) +
                            (protein * protein_quantity) +
                            (fat * fat_quantity);

    // แสดงผลลัพธ์
    cout << "ค่าพลังงานทั้งหมด: " << total_calories << " แคลอรี่" << endl;

    return 0;
}