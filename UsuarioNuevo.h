#pragma once

namespace Proyecto2Avanzada1210219JavierMorales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for UsuarioNuevo
	/// </summary>
	public ref class UsuarioNuevo : public System::Windows::Forms::Form
	{
	public:
		UsuarioNuevo(void)
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
		~UsuarioNuevo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(56, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contraseña:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(56, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UsuarioNuevo::button1_Click);
			// 
			// UsuarioNuevo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(201, 291);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"UsuarioNuevo";
			this->Text = L"Crear nuevo usuario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ Destino = Directory::GetCurrentDirectory() + "\\users\\";
		if (textBox1->Text == "" || textBox2->Text == "")
		{
			MessageBox::Show("Faltan datos por ingresar");
		}
		else
		{
			//Entonces se procede a agregar.
			try
			{
				Destino += textBox1->Text + ".csv";
				
				StreamWriter^ Escritor = gcnew StreamWriter(Destino);
				Escritor->WriteLine(Convert::ToString(textBox2->Text) + "");
				Escritor->Close();
				StreamWriter^ EsteSi = gcnew StreamWriter(Destino);
				EsteSi->WriteLine(Convert::ToString(textBox2->Text) + "");
				EsteSi->Close();
				
				Destino = Directory::GetCurrentDirectory() + "\\users\\" + textBox1->Text + ".csv";
				StreamReader^ lectorNuevoPerfil = gcnew StreamReader(Destino);
				String^ ContraNueva = lectorNuevoPerfil->ReadLine();
				lectorNuevoPerfil->Close();
				StreamWriter^ escritorPerfilContraImportados = gcnew StreamWriter(Directory::GetCurrentDirectory() + "\\usuarios.csv", true);
				String^ def = "";
				int c = 0;
				def = textBox1->Text;
				String^ escribirEsto = def + "," + ContraNueva;
				escritorPerfilContraImportados->WriteLine(escribirEsto);
				escritorPerfilContraImportados->Close();
				this->Close();
				textBox1->Text = "";
				textBox2->Text = "";
			}
			catch(...)
			{
				MessageBox::Show("Ocurrió un error durante la creación de su usuario.");
			}
		}
	}
};
}
