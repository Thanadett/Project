#include <cstdlib>
#include <ctime>
#include <cliext/adapter>

public ref class RandTextGenerator {
public:
    static System::String^ getRandomMessage() {
        array<System::String^>^ messages = {
            L"เลือกรับประทานอาหารที่ดีต่อการดูแลสุขภาพ",
            L"นอนหลับพักผ่อนให้เพียงพอ 7 - 8 ชั่วโมงต่อวัน",
            L"การออกกำลังกายอย่างสม่ำเสมอ ",
            L"ดื่มน้ำสะอาดอย่างน้อยวันละ 8-10 แก้วต่อวัน ",
            L"ปรับวิธีคิดให้เหมาะสม เพื่อสุขภาพจิตที่ดี  ",
            L"ใส่หน้ากากอนามัย ล้างมือบ่อยๆ เมื่อออกไปที่สาธารณะ",
            L"เข้ารับการตรวจสุขภาพเป็นประจำ",
            L"งดดื่มสุรา ของมึนเมา และบุหรี่"
        };

        srand(static_cast<unsigned int>(time(nullptr)));
        int index = rand() % messages->Length;

        return messages[index];
    }
};