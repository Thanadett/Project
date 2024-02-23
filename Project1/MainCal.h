﻿#pragma once
#include "Calories.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// Summary for MainCal
	/// </summary>

	public ref class MainCal : public System::Windows::Forms::Form
	{
	public:
		MainCal(void)
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
		~MainCal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox1->Location = System::Drawing::Point(173, 201);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 38);
			this->textBox1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(34, 482);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 40);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainCal::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(205, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 31);
			this->label1->TabIndex = 8;
			this->label1->Text = L"แป้ง (กรัม)";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox2->Location = System::Drawing::Point(495, 201);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(190, 38);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox3->Location = System::Drawing::Point(803, 201);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(190, 38);
			this->textBox3->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->Location = System::Drawing::Point(510, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 31);
			this->label2->TabIndex = 11;
			this->label2->Text = L"โปรตีน (กรัม)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->Location = System::Drawing::Point(834, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 31);
			this->label3->TabIndex = 12;
			this->label3->Text = L"ไขมัน (กรัม)";
			this->label3->Click += gcnew System::EventHandler(this, &MainCal::label3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->Location = System::Drawing::Point(511, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 63);
			this->button1->TabIndex = 13;
			this->button1->Text = L"คำนวณ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainCal::button1_Click);
			// 
			// MainCal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 553);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainCal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainCal";
			this->Load += gcnew System::EventHandler(this, &MainCal::MainCal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainCal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// ดึงข้อมูลจาก TextBox
		double carbs_quantity = System::Convert::ToDouble(textBox1->Text);
		double protein_quantity = System::Convert::ToDouble(textBox2->Text);
		double fat_quantity = System::Convert::ToDouble(textBox3->Text);

		// สร้าง object CaloriesCalculator
		CaloriesCalculator calculator(4, 4, 8);

		// เรียกใช้ฟังก์ชันคำนวณแคลอรี่
		double total_calories = calculator.GetTotalCalories(carbs_quantity, protein_quantity, fat_quantity);

		// แสดงผลลัพธ์
		MessageBox::Show("ค่าพลังงานทั้งหมด: " + total_calories.ToString() + " แคลอรี่", "ผลลัพธ์", MessageBoxButtons::OK);
	}
	};
	}
