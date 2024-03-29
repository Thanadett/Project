﻿#pragma once
#include "MainForm.h"
#include "MainBmi.h"
#include "MainPeriod.h"
#include "MainTest.h"
#include "MainCal.h"
#include "randtx.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainApp
	/// </summary>
	public ref class MainApp : public System::Windows::Forms::Form
	{
	public:
		MainApp(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainApp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Timers::Timer^ timer;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainApp::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button1->Location = System::Drawing::Point(213, 151);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(373, 225);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Search Medicine";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainApp::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button2->Location = System::Drawing::Point(1258, 815);
			this->button2->Margin = System::Windows::Forms::Padding(6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(257, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainApp::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button3->Location = System::Drawing::Point(1050, 110);
			this->button3->Margin = System::Windows::Forms::Padding(6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 132);
			this->button3->TabIndex = 2;
			this->button3->Text = L"BMI";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainApp::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button4->Location = System::Drawing::Point(1353, 110);
			this->button4->Margin = System::Windows::Forms::Padding(6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(162, 132);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Period";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainApp::button4_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button5->Location = System::Drawing::Point(744, 110);
			this->button5->Margin = System::Windows::Forms::Padding(6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(177, 132);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Calories";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainApp::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button6->Location = System::Drawing::Point(744, 372);
			this->button6->Margin = System::Windows::Forms::Padding(6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(177, 123);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Drepression Test";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainApp::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(1061, 372);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Tip :";
			this->label1->Click += gcnew System::EventHandler(this, &MainApp::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->Location = System::Drawing::Point(1061, 435);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 26);
			this->label2->TabIndex = 7;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Text = RandTextGenerator::getRandomMessage();
			// 
			// MainApp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1600, 900);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MainApp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainApp";
			this->Load += gcnew System::EventHandler(this, &MainApp::MainApp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MainForm^ mainForm = gcnew MainForm();
		mainForm->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MainBmi^ Bmi = gcnew MainBmi();
		Bmi->Show();
	}
	private: System::Void MainApp_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MainPeriod^ Period = gcnew MainPeriod();
		Period->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MainCal^ Cal = gcnew MainCal();
		Cal->Show();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		MainTest^ Test = gcnew MainTest();
		Test->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
