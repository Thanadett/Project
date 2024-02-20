#pragma once
#include <Windows.h>
#include <msclr/marshal_cppstd.h>

namespace Project1 {
    public ref class ResultForm : public System::Windows::Forms::Form
    {
    public:
        ResultForm(System::String^ resultText)
        {
            InitializeComponent();
            richTextBox1->Text = resultText;
        }

    protected:
        ~ResultForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultForm::typeid));
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->SuspendLayout();
            // 
            // richTextBox1
            // 
            this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->richTextBox1->Location = System::Drawing::Point(0, 0);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(284, 261);
            this->richTextBox1->TabIndex = 0;
            this->richTextBox1->Text = L"";
            this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->richTextBox1->ReadOnly = true;
            // 
            // ResultForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1200, 900);
            this->Controls->Add(this->richTextBox1);
            this->Name = L"ResultForm";
            this->Text = L"Search Result";
            this->ResumeLayout(false);
            //
            // start sc
            //
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;

        }
#pragma endregion
    private:
        System::Windows::Forms::RichTextBox^ richTextBox1;
    };
}