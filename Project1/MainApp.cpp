﻿#include "MainApp.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MainApp mainAppForm;
    Application::Run(% mainAppForm);
}