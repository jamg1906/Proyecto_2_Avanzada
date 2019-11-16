#pragma once
#include "UsuarioNuevo.h"

namespace Proyecto2Avanzada1210219JavierMorales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Sesion
	/// </summary>
	public ref class Sesion : public System::Windows::Forms::Form
	{
	public:
		Sesion(void)
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
		~Sesion()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ password_txt;
	private: System::Windows::Forms::Button^ iniciar_btn;

	private: System::Windows::Forms::Button^ importar_btn;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::OpenFileDialog^ open_files;

	private: System::Windows::Forms::ComboBox^ users_txt;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->iniciar_btn = (gcnew System::Windows::Forms::Button());
			this->importar_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->open_files = (gcnew System::Windows::Forms::OpenFileDialog());
			this->users_txt = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// password_txt
			// 
			this->password_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_txt->Location = System::Drawing::Point(74, 170);
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '*';
			this->password_txt->Size = System::Drawing::Size(150, 26);
			this->password_txt->TabIndex = 1;
			this->password_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// iniciar_btn
			// 
			this->iniciar_btn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iniciar_btn->Location = System::Drawing::Point(74, 225);
			this->iniciar_btn->Name = L"iniciar_btn";
			this->iniciar_btn->Size = System::Drawing::Size(150, 39);
			this->iniciar_btn->TabIndex = 2;
			this->iniciar_btn->Text = L"Iniciar sesión";
			this->iniciar_btn->UseVisualStyleBackColor = true;
			this->iniciar_btn->Click += gcnew System::EventHandler(this, &Sesion::iniciar_btn_Click);
			// 
			// importar_btn
			// 
			this->importar_btn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->importar_btn->Location = System::Drawing::Point(74, 316);
			this->importar_btn->Name = L"importar_btn";
			this->importar_btn->Size = System::Drawing::Size(150, 39);
			this->importar_btn->TabIndex = 3;
			this->importar_btn->Text = L"Importar perfil";
			this->importar_btn->UseVisualStyleBackColor = true;
			this->importar_btn->Click += gcnew System::EventHandler(this, &Sesion::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(87, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Inicio de sesión";
			// 
			// open_files
			// 
			this->open_files->FileName = L"openFileDialog1";
			// 
			// users_txt
			// 
			this->users_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->users_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->users_txt->FormattingEnabled = true;
			this->users_txt->Location = System::Drawing::Point(74, 106);
			this->users_txt->Name = L"users_txt";
			this->users_txt->Size = System::Drawing::Size(150, 28);
			this->users_txt->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(70, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Contraseña";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(70, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Usuario";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(74, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 39);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Crear perfil";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sesion::button1_Click);
			// 
			// Sesion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 388);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->users_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->importar_btn);
			this->Controls->Add(this->iniciar_btn);
			this->Controls->Add(this->password_txt);
			this->Name = L"Sesion";
			this->Text = L"Sesion";
			this->Load += gcnew System::EventHandler(this, &Sesion::Sesion_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		UsuarioNuevo^ US = gcnew UsuarioNuevo();


	public: 
		bool Listo_para_cerrar = false;
	public:
		String^ Usuario_Iniciado = "";
		String^ Password_Iniciada = "";

	private: System::Void Sesion_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		Listo_para_cerrar = true;
		MostrarPerfiles();
	}

private: System::Void MostrarPerfiles()
{
	try
	{
		String^ directorioPerfiles = Directory::GetCurrentDirectory() + "\\users";
		array<String^>^ arreglo;
		arreglo = gcnew array<String^>(100);
		arreglo = Directory::GetFiles(directorioPerfiles, "*.csv");
		users_txt->Items->Clear();
		int c = directorioPerfiles->Length + 2;
		for each (String ^ file in arreglo)
		{
			int c1 = file->Length - 4;
			String^ temp = "";
			for (int i = c - 1; i < c1; i++)
			{
				temp += System::Convert::ToString(file[i]);
			}
			users_txt->Items->Add(temp);
		}
	}
	catch (...)
	{
	}
	//
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		open_files->Filter = "Archivos de Agenda|*.csv;";
		System::Windows::Forms::DialogResult resultado;
		resultado = open_files->ShowDialog();
		String^ NombreNuevoPerfil;
		String^ Destino;
		if (resultado == System::Windows::Forms::DialogResult::OK)
		{
			String^ Origen = open_files->FileName;
			String^ Nombre = open_files->SafeFileName;
			NombreNuevoPerfil = open_files->SafeFileName;
			Destino = Directory::GetCurrentDirectory() + "\\users\\" + Nombre;
			File::Copy(Origen, Destino, true);
		}

		StreamReader^ lectorNuevoPerfil = gcnew StreamReader(Destino);
		String^ ContraNueva = lectorNuevoPerfil->ReadLine();
		lectorNuevoPerfil->Close();
		StreamWriter^ escritorPerfilContraImportados = gcnew StreamWriter(Directory::GetCurrentDirectory() + "\\usuarios.csv", true);
		String^ def = "";
		int c = 0;
		while (Convert::ToString(NombreNuevoPerfil[c]) != ".")
		{
			def += Convert::ToString(NombreNuevoPerfil[c]);
			c++;
		}
		String^ escribirEsto = def + "," + ContraNueva;
		escritorPerfilContraImportados->WriteLine(escribirEsto);
		escritorPerfilContraImportados->Close();
	}
	catch (...)
	{
	}
	MostrarPerfiles();
}

private: System::Void nuevo_perfil_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void iniciar_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	array<String^>^ users_en_csv;
	array<String^>^ pass_en_csv;

	String^ directorioUsuarios = Directory::GetCurrentDirectory() + "\\usuarios.csv";
	users_en_csv = gcnew array<String^>(100);
	pass_en_csv = gcnew array<String^>(100);
	String^ nombres;
	String^ passwords;

	StreamReader^ ElLector = gcnew StreamReader(directorioUsuarios);
	int c1 = 0;
	bool parar = false;
	FormatException^ d = gcnew FormatException();
	do
	{
		try
		{
			String^ temp = ElLector->ReadLine();
			int c = temp->Length;
			int t = 1;
			for (int i = 0; i < c; i++)
			{
				if (Convert::ToString(temp[i]) != "," && t == 1)
				{
					nombres += Convert::ToString(temp[i]);
				}
				if (t == 2)
				{
					passwords += Convert::ToString(temp[i]);
				}
				if (Convert::ToString(temp[i]) == ",")
				{
					t = 2;
				}
			}
			if (nombres == "" || passwords == "")
			{
				throw d;
			}
			users_en_csv[c1] = nombres;
			pass_en_csv[c1] = passwords;
			c1++;
			passwords = "";
			nombres = "";
		}
		catch(...)
		{
			parar = true;
		}
	} while (parar == false);
	int j = 0;
	bool encontrado = false;
	while (users_en_csv[j] != nullptr && encontrado == false)
	{
		if (users_en_csv[j] == users_txt->Text)
		{
			if (pass_en_csv[j] == password_txt->Text)
			{
				MessageBox::Show("Inicio sesión correctamente.");
				Usuario_Iniciado = Convert::ToString(users_en_csv[j]);
				Password_Iniciada = Convert::ToString(pass_en_csv[j]);
				this->Close();
			}
			else
			{
				MessageBox::Show("Contraseña incorrecta");
			}
			encontrado = true;
		}
		else
		{
			j++;
		}
	}
	if (encontrado == false)
	{
		MessageBox::Show("El usuario no se ha podido encontrar.");
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	US->StartPosition = this->StartPosition;
	US->ShowDialog();
	this->Show();
	MostrarPerfiles();
}
};
}
