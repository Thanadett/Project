﻿#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainTest
	/// </summary>
	public ref class MainTest : public System::Windows::Forms::Form
	{
	public:
		MainTest(void)
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
		~MainTest()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::CheckBox^ checkBox18;
	private: System::Windows::Forms::CheckBox^ checkBox19;
	private: System::Windows::Forms::CheckBox^ checkBox20;
	private: System::Windows::Forms::CheckBox^ checkBox21;
	private: System::Windows::Forms::CheckBox^ checkBox22;
	private: System::Windows::Forms::CheckBox^ checkBox23;
	private: System::Windows::Forms::CheckBox^ checkBox24;
	private: System::Windows::Forms::CheckBox^ checkBox25;
	private: System::Windows::Forms::CheckBox^ checkBox26;
	private: System::Windows::Forms::CheckBox^ checkBox27;
	private: System::Windows::Forms::CheckBox^ checkBox28;
	private: System::Windows::Forms::CheckBox^ checkBox29;
	private: System::Windows::Forms::CheckBox^ checkBox30;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainTest::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(102, 188);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(365, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"มีปัญหาการนอน นอนไม่หลับหรือนอนมาก";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(102, 280);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(290, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"หงุดหงิด,กระวนกระวาย,วุ่นวายใจ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(102, 366);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 26);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ไม่อยากพบปะผู้คน";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(102, 447);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 26);
			this->label5->TabIndex = 4;
			this->label5->Text = L"มีสมาธิน้อยลง";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(102, 524);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 26);
			this->label6->TabIndex = 5;
			this->label6->Text = L"รู้สึกเบื่อ เซ็ง";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox1.BackgroundImage")));
			this->checkBox1->Location = System::Drawing::Point(107, 234);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(57, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"ไม่เลย";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox2.BackgroundImage")));
			this->checkBox2->Location = System::Drawing::Point(194, 234);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(66, 17);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"น้อยมาก";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox3.BackgroundImage")));
			this->checkBox3->Location = System::Drawing::Point(292, 234);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(47, 17);
			this->checkBox3->TabIndex = 8;
			this->checkBox3->Text = L"น้อย";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox4.BackgroundImage")));
			this->checkBox4->Location = System::Drawing::Point(373, 234);
			this->checkBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(69, 17);
			this->checkBox4->TabIndex = 9;
			this->checkBox4->Text = L"ปานกลาง";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox5.BackgroundImage")));
			this->checkBox5->Location = System::Drawing::Point(476, 234);
			this->checkBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(45, 17);
			this->checkBox5->TabIndex = 10;
			this->checkBox5->Text = L"มาก";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox6.BackgroundImage")));
			this->checkBox6->Location = System::Drawing::Point(561, 234);
			this->checkBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(65, 17);
			this->checkBox6->TabIndex = 11;
			this->checkBox6->Text = L"มากที่สุด";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox7.BackgroundImage")));
			this->checkBox7->Location = System::Drawing::Point(107, 326);
			this->checkBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(57, 17);
			this->checkBox7->TabIndex = 12;
			this->checkBox7->Text = L"ไม่เลย";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox8.BackgroundImage")));
			this->checkBox8->Location = System::Drawing::Point(194, 326);
			this->checkBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(66, 17);
			this->checkBox8->TabIndex = 13;
			this->checkBox8->Text = L"น้อยมาก";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox9.BackgroundImage")));
			this->checkBox9->Location = System::Drawing::Point(107, 414);
			this->checkBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(57, 17);
			this->checkBox9->TabIndex = 14;
			this->checkBox9->Text = L"ไม่เลย";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox10.BackgroundImage")));
			this->checkBox10->Location = System::Drawing::Point(107, 492);
			this->checkBox10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(57, 17);
			this->checkBox10->TabIndex = 15;
			this->checkBox10->Text = L"ไม่เลย";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox11.BackgroundImage")));
			this->checkBox11->Location = System::Drawing::Point(107, 567);
			this->checkBox11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(57, 17);
			this->checkBox11->TabIndex = 16;
			this->checkBox11->Text = L"ไม่เลย";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox12.BackgroundImage")));
			this->checkBox12->Location = System::Drawing::Point(194, 414);
			this->checkBox12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(66, 17);
			this->checkBox12->TabIndex = 17;
			this->checkBox12->Text = L"น้อยมาก";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox13.BackgroundImage")));
			this->checkBox13->Location = System::Drawing::Point(194, 491);
			this->checkBox13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(66, 17);
			this->checkBox13->TabIndex = 18;
			this->checkBox13->Text = L"น้อยมาก";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox14.BackgroundImage")));
			this->checkBox14->Location = System::Drawing::Point(194, 567);
			this->checkBox14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(66, 17);
			this->checkBox14->TabIndex = 19;
			this->checkBox14->Text = L"น้อยมาก";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox15.BackgroundImage")));
			this->checkBox15->Location = System::Drawing::Point(292, 326);
			this->checkBox15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(47, 17);
			this->checkBox15->TabIndex = 20;
			this->checkBox15->Text = L"น้อย";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox16.BackgroundImage")));
			this->checkBox16->Location = System::Drawing::Point(292, 414);
			this->checkBox16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(47, 17);
			this->checkBox16->TabIndex = 21;
			this->checkBox16->Text = L"น้อย";
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox17.BackgroundImage")));
			this->checkBox17->Location = System::Drawing::Point(292, 492);
			this->checkBox17->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(47, 17);
			this->checkBox17->TabIndex = 22;
			this->checkBox17->Text = L"น้อย";
			this->checkBox17->UseVisualStyleBackColor = true;
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox18.BackgroundImage")));
			this->checkBox18->Location = System::Drawing::Point(292, 567);
			this->checkBox18->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(47, 17);
			this->checkBox18->TabIndex = 23;
			this->checkBox18->Text = L"น้อย";
			this->checkBox18->UseVisualStyleBackColor = true;
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox19.BackgroundImage")));
			this->checkBox19->Location = System::Drawing::Point(561, 326);
			this->checkBox19->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(65, 17);
			this->checkBox19->TabIndex = 26;
			this->checkBox19->Text = L"มากที่สุด";
			this->checkBox19->UseVisualStyleBackColor = true;
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox20.BackgroundImage")));
			this->checkBox20->Location = System::Drawing::Point(476, 326);
			this->checkBox20->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(45, 17);
			this->checkBox20->TabIndex = 25;
			this->checkBox20->Text = L"มาก";
			this->checkBox20->UseVisualStyleBackColor = true;
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox21.BackgroundImage")));
			this->checkBox21->Location = System::Drawing::Point(373, 326);
			this->checkBox21->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(69, 17);
			this->checkBox21->TabIndex = 24;
			this->checkBox21->Text = L"ปานกลาง";
			this->checkBox21->UseVisualStyleBackColor = true;
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox22.BackgroundImage")));
			this->checkBox22->Location = System::Drawing::Point(561, 414);
			this->checkBox22->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(65, 17);
			this->checkBox22->TabIndex = 29;
			this->checkBox22->Text = L"มากที่สุด";
			this->checkBox22->UseVisualStyleBackColor = true;
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox23.BackgroundImage")));
			this->checkBox23->Location = System::Drawing::Point(476, 414);
			this->checkBox23->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(45, 17);
			this->checkBox23->TabIndex = 28;
			this->checkBox23->Text = L"มาก";
			this->checkBox23->UseVisualStyleBackColor = true;
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox24.BackgroundImage")));
			this->checkBox24->Location = System::Drawing::Point(373, 414);
			this->checkBox24->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(69, 17);
			this->checkBox24->TabIndex = 27;
			this->checkBox24->Text = L"ปานกลาง";
			this->checkBox24->UseVisualStyleBackColor = true;
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox25.BackgroundImage")));
			this->checkBox25->Location = System::Drawing::Point(561, 492);
			this->checkBox25->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(65, 17);
			this->checkBox25->TabIndex = 32;
			this->checkBox25->Text = L"มากที่สุด";
			this->checkBox25->UseVisualStyleBackColor = true;
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox26.BackgroundImage")));
			this->checkBox26->Location = System::Drawing::Point(476, 492);
			this->checkBox26->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(45, 17);
			this->checkBox26->TabIndex = 31;
			this->checkBox26->Text = L"มาก";
			this->checkBox26->UseVisualStyleBackColor = true;
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox27.BackgroundImage")));
			this->checkBox27->Location = System::Drawing::Point(373, 492);
			this->checkBox27->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(69, 17);
			this->checkBox27->TabIndex = 30;
			this->checkBox27->Text = L"ปานกลาง";
			this->checkBox27->UseVisualStyleBackColor = true;
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox28.BackgroundImage")));
			this->checkBox28->Location = System::Drawing::Point(561, 567);
			this->checkBox28->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(65, 17);
			this->checkBox28->TabIndex = 35;
			this->checkBox28->Text = L"มากที่สุด";
			this->checkBox28->UseVisualStyleBackColor = true;
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox29.BackgroundImage")));
			this->checkBox29->Location = System::Drawing::Point(476, 567);
			this->checkBox29->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(45, 17);
			this->checkBox29->TabIndex = 34;
			this->checkBox29->Text = L"มาก";
			this->checkBox29->UseVisualStyleBackColor = true;
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox30.BackgroundImage")));
			this->checkBox30->Location = System::Drawing::Point(373, 567);
			this->checkBox30->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(69, 17);
			this->checkBox30->TabIndex = 33;
			this->checkBox30->Text = L"ปานกลาง";
			this->checkBox30->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(682, 807);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 68);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainTest::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1423, 807);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 68);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainTest::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(1157, 208);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 20);
			this->label7->TabIndex = 38;
			this->label7->Text = L"การแปลผล";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(1157, 267);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(180, 20);
			this->label8->TabIndex = 39;
			this->label8->Text = L"คะแนน 0-4 ความเครียดน้อย";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(1157, 305);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(211, 20);
			this->label9->TabIndex = 40;
			this->label9->Text = L"คะแนน 5-7 ความเครียดปานกลาง";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(1157, 341);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(181, 20);
			this->label10->TabIndex = 41;
			this->label10->Text = L"คะแนน 8-9 ความเครียดมาก";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label11.Image")));
			this->label11->Location = System::Drawing::Point(1157, 384);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(226, 20);
			this->label11->TabIndex = 42;
			this->label11->Text = L"คะแนน 10-15 ความเครียดมากที่สุด";
			this->label11->Click += gcnew System::EventHandler(this, &MainTest::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label12.Image")));
			this->label12->Location = System::Drawing::Point(1157, 425);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(260, 20);
			this->label12->TabIndex = 43;
			this->label12->Text = L"อ้างอิง กรมสุขภาพจิต กระทรวงสาธารณสุข";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label13.Image")));
			this->label13->Location = System::Drawing::Point(1156, 480);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(115, 29);
			this->label13->TabIndex = 44;
			this->label13->Text = L"คำแนะนำ :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label14.Image")));
			this->label14->Location = System::Drawing::Point(1157, 560);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(359, 96);
			this->label14->TabIndex = 45;
			this->label14->Text = L"หากทำแบบทดสอบแล้วพบว่ามีระดับความเครียดสูง\r\nไม่มั่นใจระดับความเครียดของตัวเอง \r\nอ"
				L"ยากหาทางจัดการและรับมือกับความคิดของตัวเอง \r\nปรึกษาจิตแพทย์หรือนักจิตวิทยาคลินิก"
				L"";
			// 
			// MainTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1600, 900);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox28);
			this->Controls->Add(this->checkBox29);
			this->Controls->Add(this->checkBox30);
			this->Controls->Add(this->checkBox25);
			this->Controls->Add(this->checkBox26);
			this->Controls->Add(this->checkBox27);
			this->Controls->Add(this->checkBox22);
			this->Controls->Add(this->checkBox23);
			this->Controls->Add(this->checkBox24);
			this->Controls->Add(this->checkBox19);
			this->Controls->Add(this->checkBox20);
			this->Controls->Add(this->checkBox21);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MainTest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"มากที่สุด";
			this->Load += gcnew System::EventHandler(this, &MainTest::MainTest_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int score = 0;

		if (checkBox1->Checked) score += 0;
		if (checkBox7->Checked) score += 0;
		if (checkBox9->Checked) score += 0;
		if (checkBox10->Checked) score += 0;
		if (checkBox11->Checked) score += 0;

		if (checkBox2->Checked) score += 1;
		if (checkBox8->Checked) score += 1;
		if (checkBox12->Checked) score += 1;
		if (checkBox13->Checked) score += 1;
		if (checkBox14->Checked) score += 1;

		if (checkBox3->Checked) score += 2;
		if (checkBox15->Checked) score += 2;
		if (checkBox16->Checked) score += 2;
		if (checkBox17->Checked) score += 2;
		if (checkBox18->Checked) score += 2;

		if (checkBox4->Checked) score += 3;
		if (checkBox21->Checked) score += 3;
		if (checkBox24->Checked) score += 3;
		if (checkBox27->Checked) score += 3;
		if (checkBox30->Checked) score += 3;

		if (checkBox5->Checked) score += 4;
		if (checkBox20->Checked) score += 4;
		if (checkBox23->Checked) score += 4;
		if (checkBox26->Checked) score += 4;
		if (checkBox29->Checked) score += 4;

		if (checkBox6->Checked) score += 5;
		if (checkBox19->Checked) score += 5;
		if (checkBox22->Checked) score += 5;
		if (checkBox25->Checked) score += 5;
		if (checkBox28->Checked) score += 5;

		String^ resultMessage = "คะแนนทั้งหมด: " + score + "\n";

		// แสดงผลลัพธ์ใน MessageBox ตามคะแนน
		if (score >= 0 && score <= 4) {
			resultMessage += "ความเครียด: น้อย";
		}
		else if (score >= 5 && score <= 7) {
			resultMessage += "ความเครียด: ปานกลาง";
		}
		else if (score >= 8 && score <= 9) {
			resultMessage += "ความเครียด: มาก";
		}
		else if (score >= 10 && score <= 15) {
			resultMessage += "ความเครียด: มากที่สุด";
		}

		// แสดง MessageBox
		MessageBox::Show(resultMessage, "ผลการทดสอบ");

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void MainTest_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}