#include "Sesion.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int form_sesion(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2Avanzada1210219JavierMorales::Sesion form;
	Application::Run(% form);
	return 0;
}
