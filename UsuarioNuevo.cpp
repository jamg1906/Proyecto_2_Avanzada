#include "UsuarioNuevo.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int FormNuevoUsuario(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2Avanzada1210219JavierMorales::UsuarioNuevo form;
	Application::Run(% form);
	return 0;
}

