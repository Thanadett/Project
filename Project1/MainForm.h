#pragma once
#include <vector>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "search.h"
#include "Result.h"
#include "MainApp.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:
		MainForm^ mainFormInstance;

	public:
		MainForm(void)
		{
			InitializeComponent();
			mainFormInstance = this; // กำหนด mainFormInstance เป็น object ปัจจุบัน
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ headtx;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->headtx = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// headtx
			// 
			this->headtx->AutoSize = true;
			this->headtx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->headtx->Location = System::Drawing::Point(394, 133);
			this->headtx->Name = L"headtx";
			this->headtx->Size = System::Drawing::Size(393, 46);
			this->headtx->TabIndex = 1;
			this->headtx->Text = L"Medicine Emergency";
			this->headtx->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(527, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(235, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(713, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"คุณกำลังมองหายารักษาโรคอยู่เหรอ ถามฉันมาได้เลยฉันจะตอบคุณเอง";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox1->Location = System::Drawing::Point(333, 286);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(476, 38);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(620, 483);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 5;
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(36, 529);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 40);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click_1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1200, 600);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->headtx);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Medicine Emergency";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// ข้อมูลที่ผู้ใช้ป้อนเข้ามา
		std::string userIndication = msclr::interop::marshal_as<std::string>(textBox1->Text); \

		// เรียกใช้ฟังก์ชั่น input data จากไฟล์ data.txt	
		std::vector<Medicine> file = loadFile("data.txt");
		// ค้นหายาที่ตรงกับอาการ
		std::vector<Medicine> matchingMed = findMed(userIndication, file);

		// แสดงผลลัพธ์ใน MessageBox
		if (!matchingMed.empty()) {
			std::string result = "พบยาที่ตรงกับอาการ:\n\n";
			for (const Medicine& med : matchingMed) {
				result += "ชื่อยา: " + med.name + "\n";
				result += "ใช้สำหรับ: " + med.indication + "\n";
				result += "ขนาดยา: " + med.dosage + "\n";
				result += "ความถี่: " + med.time + "\n\n";
			}
			ResultForm^ resultForm = gcnew ResultForm(gcnew System::String(result.c_str()));
			resultForm->Show();
		}
		else {
			MessageBox::Show("ไม่พบยาที่ตรงกับอาการ", "ผลลัพธ์", MessageBoxButtons::OK);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//Project1::MainApp^ mainApp = gcnew Project1::MainApp();
		//mainApp->Show();
		this->Close();
	}
	};
	}