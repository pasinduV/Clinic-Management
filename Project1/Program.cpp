#include "LoginForm.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::LoginForm loginForm;
	Application::Run(% loginForm);

	return;

	//Project1::DoctorView dashboada;
	//dashboada.ShowDialog();
}
