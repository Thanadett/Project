#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include "BMI.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MainBmi : public System::Windows::Forms::Form
	{
	public:
		MainBmi(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainBmi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;




	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 544);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 40);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainBmi::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox1->Location = System::Drawing::Point(225, 247);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 38);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox2->Location = System::Drawing::Point(778, 247);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 38);
			this->textBox2->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(219, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 31);
			this->label1->TabIndex = 10;
			this->label1->Text = L"ส่วนสูง (เซนติเมตร)";
			this->label1->Click += gcnew System::EventHandler(this, &MainBmi::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->Location = System::Drawing::Point(772, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 31);
			this->label2->TabIndex = 11;
			this->label2->Text = L"น้ำหนัก (กิโลกรัม)";
			this->label2->Click += gcnew System::EventHandler(this, &MainBmi::label2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(379, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 54);
			this->button1->TabIndex = 12;
			this->button1->Text = L"คำนวณ BMI";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainBmi::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(490, 70);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(275, 38);
			this->textBox3->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(341, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 32);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Name : ";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(660, 362);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 54);
			this->button3->TabIndex = 12;
			this->button3->Text = L"ประวัติ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainBmi::button3_Click);
			// 
			// MainBmi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 600);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainBmi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"    ";
			this->Load += gcnew System::EventHandler(this, &MainBmi::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// ดึงข้อมูลจาก TextBox
		float x = System::Convert::ToSingle(textBox1->Text);
		float y = System::Convert::ToSingle(textBox2->Text);

		System::String^ textBoxText = textBox3->Text;
		std::string name = msclr::interop::marshal_as<std::string>(textBoxText);

		// แปลงค่าส่วนสูงเป็นเมตร
		float hm = x / 100;

		// คำนวณ BMI
		float Bmical = CalculateBMI(hm, y);

		// แสดงผลลัพธ์
		String^ message = "Your BMI is " + System::Convert::ToString(Bmical) + "\n" + gcnew String(Bmi_report(Bmical).c_str());
		MessageBox::Show(message, "ผลลัพธ์ BMI", MessageBoxButtons::OK);

		//บันทึกข้อมูล
		saveData(name, hm, y, Bmical);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		std::vector<BMI> bmiData = loadFile();
		std::string message;
		for (const BMI& bmi : bmiData) {
			message += "Name: " + bmi.name + ", Height: " + std::to_string(bmi.height) + ", Weight: " + std::to_string(bmi.weight) + ", BMI: " + std::to_string(bmi.BMI) + "\n";
		}
		MessageBox::Show(gcnew String(message.c_str()), "ประวัติ BMI", MessageBoxButtons::OK);
	}
};
}
