#include "pch.h"
#include "Dashboard.h"
#include "LoginForm.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }


using namespace System::Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Klassensystem_Beta::LoginForm());
	//Application::Run(gcnew Klassensystem_Beta::Dashboard());
	return 0;
}