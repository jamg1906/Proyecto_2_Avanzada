#pragma once
#include "Sesion.h"
#include "Agregar.h"
#include "ListaEventos.h"
#include "Evento.h"

namespace Proyecto2Avanzada1210219JavierMorales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ año_txt;
	private: System::Windows::Forms::TextBox^ mes_txt;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ Calendario;
	private: System::Windows::Forms::Button^ mostrar_calendario_btn;


	private: System::Windows::Forms::Button^ agregar_btn;
	private: System::Windows::Forms::Button^ login_btn;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ cerrar_sesion_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ idBorrar_txt;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ fecha_funcion_buscar_txt;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->año_txt = (gcnew System::Windows::Forms::TextBox());
			this->mes_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Calendario = (gcnew System::Windows::Forms::DataGridView());
			this->mostrar_calendario_btn = (gcnew System::Windows::Forms::Button());
			this->agregar_btn = (gcnew System::Windows::Forms::Button());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cerrar_sesion_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->idBorrar_txt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->fecha_funcion_buscar_txt = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Calendario))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// año_txt
			// 
			this->año_txt->Location = System::Drawing::Point(87, 68);
			this->año_txt->Name = L"año_txt";
			this->año_txt->Size = System::Drawing::Size(100, 20);
			this->año_txt->TabIndex = 0;
			// 
			// mes_txt
			// 
			this->mes_txt->Location = System::Drawing::Point(87, 94);
			this->mes_txt->Name = L"mes_txt";
			this->mes_txt->Size = System::Drawing::Size(100, 20);
			this->mes_txt->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Año";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Mes";
			// 
			// Calendario
			// 
			this->Calendario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Calendario->DefaultCellStyle = dataGridViewCellStyle1;
			this->Calendario->Location = System::Drawing::Point(45, 173);
			this->Calendario->Name = L"Calendario";
			this->Calendario->Size = System::Drawing::Size(511, 360);
			this->Calendario->TabIndex = 4;
			this->Calendario->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Calendario_CellClick);
			this->Calendario->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Calendario_CellClick);
			this->Calendario->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Calendario_CellClick);
			this->Calendario->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Calendario_CellClick);
			// 
			// mostrar_calendario_btn
			// 
			this->mostrar_calendario_btn->Location = System::Drawing::Point(87, 120);
			this->mostrar_calendario_btn->Name = L"mostrar_calendario_btn";
			this->mostrar_calendario_btn->Size = System::Drawing::Size(100, 23);
			this->mostrar_calendario_btn->TabIndex = 6;
			this->mostrar_calendario_btn->Text = L"Mostrar";
			this->mostrar_calendario_btn->UseVisualStyleBackColor = true;
			this->mostrar_calendario_btn->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// agregar_btn
			// 
			this->agregar_btn->Location = System::Drawing::Point(230, 49);
			this->agregar_btn->Name = L"agregar_btn";
			this->agregar_btn->Size = System::Drawing::Size(138, 42);
			this->agregar_btn->TabIndex = 7;
			this->agregar_btn->Text = L"Agregar una tarea";
			this->agregar_btn->UseVisualStyleBackColor = true;
			this->agregar_btn->Click += gcnew System::EventHandler(this, &MyForm::agregar_btn_Click);
			// 
			// login_btn
			// 
			this->login_btn->Location = System::Drawing::Point(230, 108);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(307, 42);
			this->login_btn->TabIndex = 8;
			this->login_btn->Text = L"Iniciar sesión/Importar usuario";
			this->login_btn->UseVisualStyleBackColor = true;
			this->login_btn->Click += gcnew System::EventHandler(this, &MyForm::login_btn_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(581, 72);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox1->Size = System::Drawing::Size(188, 461);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(646, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Eventos";
			// 
			// cerrar_sesion_btn
			// 
			this->cerrar_sesion_btn->Location = System::Drawing::Point(399, 49);
			this->cerrar_sesion_btn->Name = L"cerrar_sesion_btn";
			this->cerrar_sesion_btn->Size = System::Drawing::Size(138, 42);
			this->cerrar_sesion_btn->TabIndex = 12;
			this->cerrar_sesion_btn->Text = L"Cerrrar sesión";
			this->cerrar_sesion_btn->UseVisualStyleBackColor = true;
			this->cerrar_sesion_btn->Click += gcnew System::EventHandler(this, &MyForm::cerrar_sesion_btn_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 43);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Borrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// idBorrar_txt
			// 
			this->idBorrar_txt->Location = System::Drawing::Point(27, 56);
			this->idBorrar_txt->Name = L"idBorrar_txt";
			this->idBorrar_txt->Size = System::Drawing::Size(100, 20);
			this->idBorrar_txt->TabIndex = 14;
			this->idBorrar_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->idBorrar_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::idBorrar_txt_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(43, 546);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Javier Andrés Morales González, 1210219.";
			// 
			// fecha_funcion_buscar_txt
			// 
			this->fecha_funcion_buscar_txt->Location = System::Drawing::Point(27, 40);
			this->fecha_funcion_buscar_txt->Name = L"fecha_funcion_buscar_txt";
			this->fecha_funcion_buscar_txt->Size = System::Drawing::Size(100, 20);
			this->fecha_funcion_buscar_txt->TabIndex = 17;
			this->fecha_funcion_buscar_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 43);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(66, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(54, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"FECHA";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->fecha_funcion_buscar_txt);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(787, 256);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(158, 168);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Función de búsqueda";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->idBorrar_txt);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(787, 68);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(158, 156);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Función de eliminación";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(6, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(146, 19);
			this->label8->TabIndex = 16;
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(787, 463);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 32);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Ordenar por ID";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(787, 501);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 32);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Ordenar por prioridad";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(971, 568);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cerrar_sesion_btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->login_btn);
			this->Controls->Add(this->agregar_btn);
			this->Controls->Add(this->mostrar_calendario_btn);
			this->Controls->Add(this->Calendario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mes_txt);
			this->Controls->Add(this->año_txt);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Agenda";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Calendario))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//DECLARACION DE VARIABLES QUE SERVIRAN LUEGO.
		Sesion^ S = gcnew Sesion();
		Agregar^ A = gcnew Agregar();
		String^ En_Linea = S->Usuario_Iniciado;
		public:
		ListaEventos* LaLista = new ListaEventos();
		String^ PassWordActual = "";
		Evento* Agregar_Este = new Evento();
		String^ fecha_selec;


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		//LOAD DEL FORM. SE INICIALIZAN CIERTAS COSAS.
		mostrar_calendario_btn->Enabled = false;
		agregar_btn->Enabled = false;
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		cerrar_sesion_btn->Enabled = false;
		timer1->Start();
		DateTime d = DateTime::Now;
		segs = Convert::ToInt32(d.Second);
	}

	private: System::Void Llenar_Calendario()
	{
		//MÉTODO QUE LLENA EL CALENDARIO CON EL AÑO Y EL MES INGRESADO POR EL USUARIO
		Generar_Calendario();
		for (int filas = 1; filas < 7; filas++)
		{
			for (int columnas = 0; columnas < 7; columnas++)
			{
				Calendario[columnas, filas]->Value = "";
			}
		}
		try
		{
			int año = System::Convert::ToInt32(año_txt->Text);
			int mes = System::Convert::ToInt32(mes_txt->Text);
			if (mes > 12 || mes < 1)
			{
				FormatException^ d = gcnew FormatException();
				throw d;
			}
			DateTime^ dt;
			dt = gcnew DateTime(año, mes, 1);
			String^ dia_semana = Convert::ToString(dt->DayOfWeek);
			int dias = Convert::ToInt16(dt->DaysInMonth(año, mes));
			int iniciar;
			if (dia_semana == "Monday")
			{
				iniciar = 1;
			}
			else if (dia_semana == "Tuesday")
			{
				iniciar = 2;
			}
			else if (dia_semana == "Wednesday")
			{
				iniciar = 3;
			}
			else if (dia_semana == "Thursday")
			{
				iniciar = 4;
			}
			else if (dia_semana == "Friday")
			{
				iniciar = 5;
			}
			else if (dia_semana == "Saturday")
			{
				iniciar = 6;
			}
			else if (dia_semana == "Sunday")
			{
				iniciar = 0;
			}
			int f = 1;
			for (int i = 0; i < dias; i++)
			{
				Calendario[iniciar, f]->Value = i+1 + "";
				iniciar++;
				if (iniciar == 7)
				{
					iniciar = 0;
					f++;
				}
			}
		}
			catch (...)
		{
			MessageBox::Show("El formato del año o mes es incorrecto.");
		}


	}

	private: System::Void Generar_Calendario()
	{
		//FUNCION QUE GENERA EL DATAGRID DE MANERA APROPIADO.
		for (int i = 0; i < 7; i++)
		{
			DataGridViewTextBoxColumn^ dgvcolumna = gcnew DataGridViewTextBoxColumn();
			Calendario->Columns->Add(dgvcolumna);
			Calendario->Columns[i]->Frozen = true;
			Calendario->Columns[i]->Width = Calendario->Width / 7;
		}
		for (int i = 0; i < 7; i++)
		{
			Calendario->Rows->Add();
			Calendario->Rows[i]->Frozen = true;
			Calendario->Rows[i]->Height = (Calendario->Height-30) / 6;
			Calendario->Rows[0]->Height = 30;
		}
		Calendario[0, 0]->Value = "Domingo";
		Calendario[1, 0]->Value = "Lunes";
		Calendario[2, 0]->Value = "Martes";
		Calendario[3, 0]->Value = "Miércoles";
		Calendario[4, 0]->Value = "Jueves";
		Calendario[5, 0]->Value = "Viernes";
		Calendario[6, 0]->Value = "Sábado";
		
		Calendario->ColumnHeadersVisible = false;
		Calendario->RowHeadersVisible = false;
		Calendario->AllowUserToAddRows = false;
		Calendario->AllowUserToResizeColumns = false;
		Calendario->AllowUserToResizeRows = false;
		Calendario->ReadOnly = true;
		Calendario->MultiSelect = false;
		//Calendario->Enabled = false;
		Calendario->ClearSelection();
	}

private: System::Void Calendario_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	//MÉTODO QUE PERMITE LA DETECCIÓN DE LA SELECCIÓN DE UNA FECHA EN EL CALENDARIO.
	int fila_seleccionada = Calendario->CurrentCell->RowIndex;
	int columna_seleccionada = Calendario->CurrentCell->ColumnIndex;
	if (fila_seleccionada == 0 || Calendario[columna_seleccionada, fila_seleccionada]->Value == "")
	{
		Calendario->ClearSelection();
	}
	else
	{
		label8->Text = fecha_selec;
		fecha_funcion_buscar_txt->Text = fecha_selec;
		obtenerFechaobtenerLista();
	}

}

private: System::Void LimpiarCalendario()
{
	//METODO QUE SIMPLEMENTE BORRA EL CALENDARIO
	Calendario->Rows->Clear();
	Calendario->Columns->Clear();
	Calendario->Refresh();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Llenar_Calendario();
	richTextBox1->Text = "";
}
private: System::Void login_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//sE LLEVA A CABO CUANDO SE PRESIONA EL BOTON DE INICIAR SESION
	login_btn->Text = "Cambiar usuario/Crear usuario";
	do
	{
		this->Hide();
		S->StartPosition = this->StartPosition;
		S->ShowDialog();
	} while (S->Listo_para_cerrar == false);
	En_Linea = S->Usuario_Iniciado;
	PassWordActual = S->Password_Iniciada;
	if (En_Linea != "")
	{
		mostrar_calendario_btn->Enabled = true;
		agregar_btn->Enabled = true;
		cerrar_sesion_btn->Enabled = true;
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		login_btn->Enabled = false;
		LeerCSV();
	}
	this->Show();
}
private: System::Void cerrar_sesion_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON DE CERRAR SESION
	//RESTABLECE CIERTOS PARAMETROS.
	GuardarDatos();
	Application::Restart();
	S->Usuario_Iniciado = "";
	S->Password_Iniciada = "";
	En_Linea = "";
	PassWordActual = "";
	login_btn->Enabled = true;
	agregar_btn->Enabled = false;
	cerrar_sesion_btn->Enabled = false;
	button1->Enabled = false;
	button2->Enabled = false;
	mostrar_calendario_btn->Enabled = false;
	LimpiarCalendario();
	//GUARDAR AGENDA()
	richTextBox1->Text = "";
	LaLista->BorrarLista(*LaLista);
}

private: System::Void obtenerFechaobtenerLista()
{
	//MÉTODO QUE MUESTRA LA LISTA TRATANDO DE OBTENER LA FECHA SELECCIONADA PARA PODER MOSTRAR LOS EVENTOS
	//SOBREESCRIBE AL RICHTEXTBOX
	try
	{
		int fila_seleccionada = Calendario->CurrentCell->RowIndex;
		int columna_seleccionada = Calendario->CurrentCell->ColumnIndex;
		int d = Convert::ToInt32(Calendario[columna_seleccionada, fila_seleccionada]->Value);
		String^ diatemporal = "";
		if (d < 10)
		{
			diatemporal = "0" + d;
		}
		else
		{
			diatemporal = d + "";
		}
		String^ mes_temp = "";
		int mt = Convert::ToInt32(mes_txt->Text);
		if (mt < 10)
		{
			mes_temp = "0" + mt;
		}
		else
		{
			mes_temp = mt + "";
		}
		fecha_selec = diatemporal + "/" + mes_temp + "/" + año_txt->Text;
		char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(fecha_selec);
		std::string FechaMandar = cad;
		richTextBox1->Text = LaLista->Mostrar_Eventos_Dia(FechaMandar, *LaLista);
		label8->Text = fecha_selec;
		fecha_funcion_buscar_txt->Text = fecha_selec;
	}
	catch (...)
	{

	}
}

private: System::Void agregar_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON QUE AGREGA EVENTOS
	//ABRE UN NUEVO FORM PARA PODER REALIZARLO
	//REALIZA VERIFICACIONES
	try
	{
		int fila_seleccionada = Calendario->CurrentCell->RowIndex;
		int columna_seleccionada = Calendario->CurrentCell->ColumnIndex;
		int d = Convert::ToInt32(Calendario[columna_seleccionada, fila_seleccionada]->Value);
		String^ diatemporal = "";
		if (d < 10)
		{
			diatemporal = "0" + d;
		}
		else
		{
			diatemporal = d + "";
		}
		String^ mes_temp = "";
		int mt = Convert::ToInt32(mes_txt->Text);
		if (mt < 10)
		{
			mes_temp = "0" + mt;
		}
		else
		{
			mes_temp = mt + "";
		}
		this->Hide();
		A->StartPosition = this->StartPosition;
		A->ReiniciarForm();
		A->fech = diatemporal + "/" + mes_temp + "/" + año_txt->Text;
		String^ fechaparabuscarid = diatemporal + "/" + mes_temp + "/" + año_txt->Text;
		A->ShowDialog();
		this->Show();
		char* fea = (char*)(void*)Marshal::StringToHGlobalAnsi(fechaparabuscarid);
		std::string fechaparabuscarconvertido = fea;
		if (A->nuevoEvento)
		{
			//Entonces se agrega a la lista
			//voy a verificar acá que el id no se repita
			int id_original;
			id_original = A->Creado->Identificador;
			if (id_original > 1000)
			{
				id_original = 1;
			}
			bool comprobar = LaLista->ExisteID(fechaparabuscarconvertido, *LaLista, id_original);
			while (comprobar == false)
			{
				id_original++;
				comprobar = LaLista->ExisteID(fechaparabuscarconvertido, *LaLista, id_original);
			}
			A->Creado->Identificador = id_original;
			LaLista->Agregar(A->Creado);
			obtenerFechaobtenerLista();
		}
		A->ReiniciarForm();
	} 
	catch (...)
	{
		MessageBox::Show("Debe seleccionar un día en el calendario para poder agregar un evento.");
	}
}

private: System::Void LeerCSV()
{
	//MPETODO PARA LEER MI CSV Y LUEGO EXTRAER LOS EVENTOS Y AÑADIRLOS A LA LISTA.
	try
	{
		StreamReader^ ElLector = gcnew StreamReader(Directory::GetCurrentDirectory() + "\\users\\" + En_Linea + ".csv");
		String^ texto = ElLector->ReadLine();
		texto = "";

		while ((texto = ElLector->ReadLine()) != nullptr)
		{
			Evento* EsteAgregar = new Evento();
			String^ temp = "";
			int contador_temp = 0;
			int tipo = 0;
			for (int i = 0; i < texto->Length; i++)
			{
				if (Convert::ToString(texto[i]) == ",")
				{
					contador_temp++;
					if (contador_temp == 1)
					{
						tipo = Convert::ToInt32(temp);
					}
					if (tipo == 1)
					{
						//Asignar valores de actividad
						EsteAgregar->Tipo = "Actividad";
						if (contador_temp == 2)
						{
							int id_sacado = Convert::ToInt32(temp);
							EsteAgregar->Identificador = id_sacado;
						}
						if (contador_temp == 3)
						{
							int priori_sacada = Convert::ToInt32(temp);
							EsteAgregar->prioridad = priori_sacada;
						}
						if (contador_temp == 4)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string descri_sacada = cad;
							EsteAgregar->Descripción = descri_sacada;
						}
						if (contador_temp == 5)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string fecha_sacada = cad;
							EsteAgregar->Fecha = fecha_sacada;
						}
						if (contador_temp == 6)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string horain_sacada = cad;
							EsteAgregar->Hora_Inicio_Ac = horain_sacada;
						}
						if (contador_temp == 7)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string horafin_sacada = cad;
							EsteAgregar->Hora_Fin_Ac = horafin_sacada;
						}
						if (contador_temp == 8)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string lugar_sacada = cad;
							EsteAgregar->Lugar_Ac = lugar_sacada;
						}
						if (contador_temp == 9)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string material_sacada = cad;
							EsteAgregar->Materiales_Ac = material_sacada;
						}
						if (contador_temp == 10)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string personas_sacada = cad;
							EsteAgregar->Personas_Ac = personas_sacada;
						}
					}
					if (tipo == 2)
					{
						//Asignar valores de Recordatorio
						EsteAgregar->Tipo = "Recordatorio";
						if (contador_temp == 2)
						{
							int id_sacado = Convert::ToInt32(temp);
							EsteAgregar->Identificador = id_sacado;
						}
						if (contador_temp == 3)
						{
							int priori_sacada = Convert::ToInt32(temp);
							EsteAgregar->prioridad = priori_sacada;
						}
						if (contador_temp == 4)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string descri_sacada = cad;
							EsteAgregar->Descripción = descri_sacada;
						}
						if (contador_temp == 5)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string fecha_sacada = cad;
							EsteAgregar->Fecha = fecha_sacada;
						}
						if (contador_temp == 6)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string horalimite_sacada = cad;
							EsteAgregar->Hora_Limite_R = horalimite_sacada;
						}
					}
					if (tipo == 3)
					{
						//Asignar valores de Alarma
						EsteAgregar->Tipo = "Alarma";
						if (contador_temp == 2)
						{
							int id_sacado = Convert::ToInt32(temp);
							EsteAgregar->Identificador = id_sacado;
						}
						if (contador_temp == 3)
						{
							int priori_sacada = Convert::ToInt32(temp);
							EsteAgregar->prioridad = priori_sacada;
						}
						if (contador_temp == 4)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string descri_sacada = cad;
							EsteAgregar->Descripción = descri_sacada;
						}
						if (contador_temp == 5)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string fecha_sacada = cad;
							EsteAgregar->Fecha = fecha_sacada;
						}
						if (contador_temp == 6)
						{
							char* cad = (char*)(void*)Marshal::StringToHGlobalAnsi(temp);
							std::string hora_sacada = cad;
							EsteAgregar->Hora_Alarma = hora_sacada;
						}
					}
					//Aquí significa que termina de encontrar uno de los parametros
					temp = "";
				}
				else if (Convert::ToString(texto[i]) != ",")
				{
					temp += Convert::ToString(texto[i]);
				}
			}
			LaLista->Agregar(EsteAgregar);
			//Aquí reiniciar contador y temp
			//Aquí agregar mi evento a la lista.
		}

		ElLector->Close();
	}
	catch (...)
	{
		MessageBox::Show("Hubo un problema para leer el archivo de texto.");
	}
	
}

private: System::Void GuardarDatos()
{
	//METODO CONTRARIO AL ANTERIOR
	//METODO QUE GUARDA LOS EVENTOS EN EL CSV CONFORME RECORRE LA LISTA
	String^ directorio = Directory::GetCurrentDirectory() + "\\users\\" + En_Linea + ".csv";
	File::WriteAllText(directorio, "");
	StreamWriter^ ElEscritor = gcnew StreamWriter(Directory::GetCurrentDirectory() + "\\users\\" + En_Linea + ".csv");
	ElEscritor->WriteLine(PassWordActual);
	Evento* ParaRecorrer = new Evento();
	ParaRecorrer = LaLista->Head;
	while (ParaRecorrer != nullptr)
	{
		//Aquí va el método de escritura.
		if (ParaRecorrer->Tipo == "Actividad")
		{
			String^ Escribeme = "";
			Escribeme += "1," + ParaRecorrer->Identificador + "," + ParaRecorrer->prioridad;
			String^ Descri_ = gcnew String(ParaRecorrer->Descripción.c_str());
			String^ fechaAc = gcnew String(ParaRecorrer->Fecha.c_str());
			String^ Horain_ac = gcnew String(ParaRecorrer->Hora_Inicio_Ac.c_str());
			String^ Horafin_ac = gcnew String(ParaRecorrer->Hora_Fin_Ac.c_str());
			String^ Lug_Ac = gcnew String(ParaRecorrer->Lugar_Ac.c_str());
			String^ Mat_AC = gcnew String(ParaRecorrer->Materiales_Ac.c_str());
			String^ Pers_Ac = gcnew String(ParaRecorrer->Personas_Ac.c_str());
			Escribeme += "," + Descri_ + "," + fechaAc + "," + Horain_ac + "," + Horafin_ac + "," + Lug_Ac + "," + Mat_AC + "," + Pers_Ac + ",";
			ElEscritor->WriteLine(Escribeme);
		}
		else if (ParaRecorrer->Tipo == "Recordatorio")
		{
			String^ Escribeme = "";
			Escribeme += "2," + ParaRecorrer->Identificador + "," + ParaRecorrer->prioridad;
			String^ Descri_ = gcnew String(ParaRecorrer->Descripción.c_str());
			String^ fechaRe = gcnew String(ParaRecorrer->Fecha.c_str());
			String^ HoraL_Re = gcnew String(ParaRecorrer->Hora_Limite_R.c_str());
			Escribeme += "," + Descri_ + "," + fechaRe + "," + HoraL_Re + ",";
			ElEscritor->WriteLine(Escribeme);
		}
		else if (ParaRecorrer->Tipo == "Alarma")
		{
			String^ Escribeme = "";
			Escribeme += "3," + ParaRecorrer->Identificador + "," + ParaRecorrer->prioridad;
			String^ Descri_ = gcnew String(ParaRecorrer->Descripción.c_str());
			String^ fechaRe = gcnew String(ParaRecorrer->Fecha.c_str());
			String^ HoraAla = gcnew String(ParaRecorrer->Hora_Alarma.c_str());
			Escribeme += "," + Descri_ + "," + fechaRe + "," + HoraAla + ",";
			ElEscritor->WriteLine(Escribeme);
		}
		ParaRecorrer = ParaRecorrer->Siguiente;
	}
	ElEscritor->Close();
}


private: System::Void exportar_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON DE BORRADO
	try
	{
		int fila_seleccionada = Calendario->CurrentCell->RowIndex;
		int columna_seleccionada = Calendario->CurrentCell->ColumnIndex;
		int d = Convert::ToInt32(Calendario[columna_seleccionada, fila_seleccionada]->Value);
		String^ diatemporal = "";
		if (d < 10)
		{
			diatemporal = "0" + d;
		}
		else
		{
			diatemporal = d + "";
		}
		String^ mes_temp = "";
		int mt = Convert::ToInt32(mes_txt->Text);
		if (mt < 10)
		{
			mes_temp = "0" + mt;
		}
		else
		{
			mes_temp = mt + "";
		}
		String^ fechaparabuscarid = diatemporal + "/" + mes_temp + "/" + año_txt->Text;
		char* fea = (char*)(void*)Marshal::StringToHGlobalAnsi(fechaparabuscarid);
		std::string fechaparabuscarconvertido = fea;
		LaLista->EliminarEvento(fechaparabuscarconvertido, LaLista, Convert::ToInt32(idBorrar_txt->Text));
		obtenerFechaobtenerLista();
	}
	catch (...)
	{
		MessageBox::Show("Debe seleccionar un día en el calendario para poder eliminar un evento.");
	}
}
private: System::Void idBorrar_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON BUSCAR
	try
	{
		String^ fechaBuscar = fecha_funcion_buscar_txt->Text;
		int idBuscar = Convert::ToInt32(textBox1->Text);

		char* c = (char*)(void*)Marshal::StringToHGlobalAnsi(fechaBuscar);
		std::string fechaMandarBuscar = c;
		String^ finald = LaLista->BuscarEvento(fechaMandarBuscar, LaLista, idBuscar);
		if (finald != "")
		{
			richTextBox1->Text = fechaBuscar + "\n" + finald;
		}
	}
	catch (...)
	{
		MessageBox::Show("Ocurrió un error. ¿Ingresó correctamente los datos para la búsqueda?");
	}
	textBox1->Text = "";


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON ORDEN POR ID
	try
	{
		int fila_seleccionada = Calendario->CurrentCell->RowIndex;
		int columna_seleccionada = Calendario->CurrentCell->ColumnIndex;
		int d = Convert::ToInt32(Calendario[columna_seleccionada, fila_seleccionada]->Value);
		String^ diatemporal = "";
		if (d < 10)
		{
			diatemporal = "0" + d;
		}
		else
		{
			diatemporal = d + "";
		}
		String^ mes_temp = "";
		int mt = Convert::ToInt32(mes_txt->Text);
		if (mt < 10)
		{
			mes_temp = "0" + mt;
		}
		else
		{
			mes_temp = mt + "";
		}
		String^ fechaparabuscarid = diatemporal + "/" + mes_temp + "/" + año_txt->Text;
		char* fea = (char*)(void*)Marshal::StringToHGlobalAnsi(fechaparabuscarid);
		std::string fechaparabuscarconvertido = fea;
		//Aquí agregar la función para ordenar por ID
		richTextBox1->Text = LaLista->MostrarDiaOrdenID(fechaparabuscarconvertido, LaLista);
	}
	catch (...)
	{
		MessageBox::Show("Debe seleccionar un día en el calendario para poder ordenar los eventos del día.");
	}




}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON DE ORDENAR POR PRIORIDAD.
	try
	{
		int fila_seleccionada = Calendario->CurrentCell->RowIndex;
		int columna_seleccionada = Calendario->CurrentCell->ColumnIndex;
		int d = Convert::ToInt32(Calendario[columna_seleccionada, fila_seleccionada]->Value);
		String^ diatemporal = "";
		if (d < 10)
		{
			diatemporal = "0" + d;
		}
		else
		{
			diatemporal = d + "";
		}
		String^ mes_temp = "";
		int mt = Convert::ToInt32(mes_txt->Text);
		if (mt < 10)
		{
			mes_temp = "0" + mt;
		}
		else
		{
			mes_temp = mt + "";
		}
		String^ fechaparabuscarid = diatemporal + "/" + mes_temp + "/" + año_txt->Text;
		char* fea = (char*)(void*)Marshal::StringToHGlobalAnsi(fechaparabuscarid);
		std::string fechaparabuscarconvertido = fea;
		//Aquí agregar la función para ordenar por ID
		richTextBox1->Text = LaLista->MostrarDiaPrioridad(fechaparabuscarconvertido, LaLista);
	}
	catch (...)
	{
		MessageBox::Show("Debe seleccionar un día en el calendario para poder ordenar los eventos del día.");
	}
}
	   int segs = 0;
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	//MÉTODO QUE REPRESENTA EL TIMER Y LA COMPROBACION DE ALARMAS RECORDATORIOS Y ACTIVIDADES
	String^ AuxHoras = "";
	String^ AuxMinutos = "";
	Evento* Aux = new Evento();
	Aux = LaLista->Head;
	DateTime dt;
	dt = DateTime::Now;
	int hora = Convert::ToInt32(dt.Hour);
	int min = Convert::ToInt32(dt.Minute);
	if (hora < 10)
	{
		AuxHoras = "0" + hora;
	}
	else
	{
		AuxHoras = hora + "";
	}
	if (min < 10)
	{
		AuxMinutos = "0" + min;
	}
	else
	{
		AuxMinutos = min + "";
	}
	String^ HoraActual = AuxHoras + ":" + AuxMinutos;
	String^ FechaActual = Convert::ToString(dt.Day) +"/" + Convert::ToString(dt.Month) + "/" + Convert::ToString(dt.Year);
	String^ HoraEvento;
	segs++;
	if (segs == 60)
	{
		segs = 0;
		while (Aux != nullptr)
		{
			if (Aux->Tipo == "Recordatorio")
			{
				String^ Hora = gcnew String(Aux->Hora_Limite_R.c_str());
				String^ Fecha = gcnew String(Aux->Fecha.c_str());
				String^ Descripcion = gcnew String(Aux->Descripción.c_str());
				if (Hora == HoraActual && Fecha == FechaActual)
				{
					if (MessageBox::Show("RECORDATORIO:\n\n" + Descripcion + "\n\nPresiona Sí para descartar y No para posponer 5 minutos.\n", "Recordatorio", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						//No se hace nada porque el usuario descartó la alarma.
					}
					else
					{
						DateTime DT;
						DT = DateTime::Now;
						DT = DT.AddMinutes(5);
						String^ HorasAux = "";
						String^ MinutosAux = "";
						int min = Convert::ToInt32(DT.Minute);
						int horas = Convert::ToInt32(DT.Hour);
						if (horas < 10)
						{
							HorasAux = "0" + horas;
						}
						else
						{
							HorasAux = horas + "";
						}
						if (min < 10)
						{
							MinutosAux = "0" + min;
						}
						else
						{
							MinutosAux = min + "";
						}
						String^ HoraNueva = HorasAux + ":" + MinutosAux;
						std::string AsignameHoraNueva;
						char* c = (char*)(void*)Marshal::StringToHGlobalAnsi(HoraNueva);
						AsignameHoraNueva = c;
						Aux->Hora_Limite_R = AsignameHoraNueva;
					}
				}
			}
			else if (Aux->Tipo == "Alarma")
			{
				String^ Hora = gcnew String(Aux->Hora_Alarma.c_str());
				String^ Fecha = gcnew String(Aux->Fecha.c_str());
				String^ Descripcion = gcnew String(Aux->Descripción.c_str());
				if (Hora == HoraActual && Fecha == FechaActual)
				{
					if (MessageBox::Show("ALARMA:\n\n" + Descripcion + "\n\nPresiona Sí para descartar y No para posponer 3 minutos.\n", "Alarma", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						//No se hace nada porque el usuario descartó la alarma.
					}
					else
					{
						DateTime DT;
						DT = DateTime::Now;
						DT = DT.AddMinutes(3);
						String^ HorasAux = "";
						String^ MinutosAux = "";
						int min = Convert::ToInt32(DT.Minute);
						int horas = Convert::ToInt32(DT.Hour);
						if (horas < 10)
						{
							HorasAux = "0" + horas;
						}
						else
						{
							HorasAux = horas + "";
						}
						if (min < 10)
						{
							MinutosAux = "0" + min;
						}
						else
						{
							MinutosAux = min + "";
						}
						String^ HoraNueva = HorasAux + ":" + MinutosAux;
						std::string AsignameHoraNueva;
						char* c = (char*)(void*)Marshal::StringToHGlobalAnsi(HoraNueva);
						AsignameHoraNueva = c;
						Aux->Hora_Alarma = AsignameHoraNueva;
					}
				}
			}
			else if (Aux->Tipo == "Actividad")
			{
				String^ Hora = gcnew String(Aux->Hora_Inicio_Ac.c_str());
				String^ Fecha = gcnew String(Aux->Fecha.c_str());
				String^ Descripcion = gcnew String(Aux->Descripción.c_str());
				if (Hora == HoraActual && Fecha == FechaActual)
				{
					MessageBox::Show("ACTIVIDAD:\n\n" + Descripcion + "\n");
				}
			}
			Aux = Aux->Siguiente;
			try
			{
				obtenerFechaobtenerLista();
			}
			catch (...)
			{
			}
		}
	}
}
};
}
