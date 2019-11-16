#include "Agregar.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int agregarform(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2Avanzada1210219JavierMorales::Agregar form;
	Application::Run(% form);
	return 0;
}

