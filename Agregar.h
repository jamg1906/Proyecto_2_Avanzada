#pragma once
#include "ListaEventos.h"
#include "Evento.h"


namespace Proyecto2Avanzada1210219JavierMorales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Agregar
	/// </summary>
	public ref class Agregar : public System::Windows::Forms::Form
	{
	public:
		Agregar(void)
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
		~Agregar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ descripcion_txt;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Ac_personas_txt;
	private: System::Windows::Forms::TextBox^ Ac_materiales_txt;
	private: System::Windows::Forms::TextBox^ Ac_lugar_txt;


	private: System::Windows::Forms::Label^ label11;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ Ac_minutos_fin_txt;
	private: System::Windows::Forms::ComboBox^ Ac_hora_fin_txt;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ Ac_minutos_inicio_txt;
	private: System::Windows::Forms::ComboBox^ Ac_hora_inicio_txt;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ Re_hora_limite_txt;
	private: System::Windows::Forms::ComboBox^ Re_minutos_limite_txt;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ Ala_hora_txt;
	private: System::Windows::Forms::ComboBox^ Ala_minutos_txt;
	private: System::Windows::Forms::TextBox^ id_txt;
	private: System::Windows::Forms::ComboBox^ prioridad_txt;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->descripcion_txt = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Ac_minutos_fin_txt = (gcnew System::Windows::Forms::ComboBox());
			this->Ac_hora_fin_txt = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Ac_minutos_inicio_txt = (gcnew System::Windows::Forms::ComboBox());
			this->Ac_hora_inicio_txt = (gcnew System::Windows::Forms::ComboBox());
			this->Ac_personas_txt = (gcnew System::Windows::Forms::TextBox());
			this->Ac_materiales_txt = (gcnew System::Windows::Forms::TextBox());
			this->Ac_lugar_txt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Ala_hora_txt = (gcnew System::Windows::Forms::ComboBox());
			this->Ala_minutos_txt = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Re_hora_limite_txt = (gcnew System::Windows::Forms::ComboBox());
			this->Re_minutos_limite_txt = (gcnew System::Windows::Forms::ComboBox());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->prioridad_txt = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 343);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Agregar::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Actividad", L"Recordatorio", L"Alarma" });
			this->comboBox1->Location = System::Drawing::Point(35, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(228, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Agregar::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Identificador (Número)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Prioridad (Número)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Descripción";
			// 
			// descripcion_txt
			// 
			this->descripcion_txt->Location = System::Drawing::Point(101, 183);
			this->descripcion_txt->Name = L"descripcion_txt";
			this->descripcion_txt->Size = System::Drawing::Size(162, 137);
			this->descripcion_txt->TabIndex = 7;
			this->descripcion_txt->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Seleccione un tipo de evento...";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->Ac_minutos_fin_txt);
			this->groupBox1->Controls->Add(this->Ac_hora_fin_txt);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->Ac_minutos_inicio_txt);
			this->groupBox1->Controls->Add(this->Ac_hora_inicio_txt);
			this->groupBox1->Controls->Add(this->Ac_personas_txt);
			this->groupBox1->Controls->Add(this->Ac_materiales_txt);
			this->groupBox1->Controls->Add(this->Ac_lugar_txt);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(318, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(273, 232);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Actividades";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(180, 72);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(10, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L":";
			// 
			// Ac_minutos_fin_txt
			// 
			this->Ac_minutos_fin_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Ac_minutos_fin_txt->FormattingEnabled = true;
			this->Ac_minutos_fin_txt->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23",
					L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41",
					L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->Ac_minutos_fin_txt->Location = System::Drawing::Point(191, 69);
			this->Ac_minutos_fin_txt->Name = L"Ac_minutos_fin_txt";
			this->Ac_minutos_fin_txt->Size = System::Drawing::Size(66, 21);
			this->Ac_minutos_fin_txt->TabIndex = 27;
			// 
			// Ac_hora_fin_txt
			// 
			this->Ac_hora_fin_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Ac_hora_fin_txt->FormattingEnabled = true;
			this->Ac_hora_fin_txt->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->Ac_hora_fin_txt->Location = System::Drawing::Point(112, 69);
			this->Ac_hora_fin_txt->Name = L"Ac_hora_fin_txt";
			this->Ac_hora_fin_txt->Size = System::Drawing::Size(66, 21);
			this->Ac_hora_fin_txt->TabIndex = 26;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(180, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L":";
			// 
			// Ac_minutos_inicio_txt
			// 
			this->Ac_minutos_inicio_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Ac_minutos_inicio_txt->FormattingEnabled = true;
			this->Ac_minutos_inicio_txt->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04",
					L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22",
					L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40",
					L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58",
					L"59"
			});
			this->Ac_minutos_inicio_txt->Location = System::Drawing::Point(191, 29);
			this->Ac_minutos_inicio_txt->Name = L"Ac_minutos_inicio_txt";
			this->Ac_minutos_inicio_txt->Size = System::Drawing::Size(66, 21);
			this->Ac_minutos_inicio_txt->TabIndex = 24;
			// 
			// Ac_hora_inicio_txt
			// 
			this->Ac_hora_inicio_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Ac_hora_inicio_txt->FormattingEnabled = true;
			this->Ac_hora_inicio_txt->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->Ac_hora_inicio_txt->Location = System::Drawing::Point(112, 29);
			this->Ac_hora_inicio_txt->Name = L"Ac_hora_inicio_txt";
			this->Ac_hora_inicio_txt->Size = System::Drawing::Size(66, 21);
			this->Ac_hora_inicio_txt->TabIndex = 23;
			// 
			// Ac_personas_txt
			// 
			this->Ac_personas_txt->Location = System::Drawing::Point(112, 187);
			this->Ac_personas_txt->Name = L"Ac_personas_txt";
			this->Ac_personas_txt->Size = System::Drawing::Size(145, 20);
			this->Ac_personas_txt->TabIndex = 22;
			// 
			// Ac_materiales_txt
			// 
			this->Ac_materiales_txt->Location = System::Drawing::Point(112, 149);
			this->Ac_materiales_txt->Name = L"Ac_materiales_txt";
			this->Ac_materiales_txt->Size = System::Drawing::Size(145, 20);
			this->Ac_materiales_txt->TabIndex = 21;
			// 
			// Ac_lugar_txt
			// 
			this->Ac_lugar_txt->Location = System::Drawing::Point(112, 107);
			this->Ac_lugar_txt->Name = L"Ac_lugar_txt";
			this->Ac_lugar_txt->Size = System::Drawing::Size(145, 20);
			this->Ac_lugar_txt->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Personas";
			this->label10->Click += gcnew System::EventHandler(this, &Agregar::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 156);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Materiales";
			this->label9->Click += gcnew System::EventHandler(this, &Agregar::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 114);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Lugar";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 77);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Hora fin";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Hora inicio";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->Ala_hora_txt);
			this->groupBox2->Controls->Add(this->Ala_minutos_txt);
			this->groupBox2->Location = System::Drawing::Point(318, 326);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(273, 61);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Alarmas";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(180, 26);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(10, 13);
			this->label15->TabIndex = 31;
			this->label15->Text = L":";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 26);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(30, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Hora";
			// 
			// Ala_hora_txt
			// 
			this->Ala_hora_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Ala_hora_txt->FormattingEnabled = true;
			this->Ala_hora_txt->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->Ala_hora_txt->Location = System::Drawing::Point(112, 23);
			this->Ala_hora_txt->Name = L"Ala_hora_txt";
			this->Ala_hora_txt->Size = System::Drawing::Size(66, 21);
			this->Ala_hora_txt->TabIndex = 29;
			// 
			// Ala_minutos_txt
			// 
			this->Ala_minutos_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Ala_minutos_txt->FormattingEnabled = true;
			this->Ala_minutos_txt->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23",
					L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41",
					L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->Ala_minutos_txt->Location = System::Drawing::Point(191, 23);
			this->Ala_minutos_txt->Name = L"Ala_minutos_txt";
			this->Ala_minutos_txt->Size = System::Drawing::Size(66, 21);
			this->Ala_minutos_txt->TabIndex = 30;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->Re_hora_limite_txt);
			this->groupBox3->Controls->Add(this->Re_minutos_limite_txt);
			this->groupBox3->Location = System::Drawing::Point(318, 259);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(273, 61);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Recordatorios";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Agregar::groupBox3_Enter);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(180, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(10, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L":";
			this->label14->Click += gcnew System::EventHandler(this, &Agregar::label14_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 26);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Hora límite";
			this->label11->Click += gcnew System::EventHandler(this, &Agregar::label11_Click);
			// 
			// Re_hora_limite_txt
			// 
			this->Re_hora_limite_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Re_hora_limite_txt->FormattingEnabled = true;
			this->Re_hora_limite_txt->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->Re_hora_limite_txt->Location = System::Drawing::Point(112, 23);
			this->Re_hora_limite_txt->Name = L"Re_hora_limite_txt";
			this->Re_hora_limite_txt->Size = System::Drawing::Size(66, 21);
			this->Re_hora_limite_txt->TabIndex = 26;
			// 
			// Re_minutos_limite_txt
			// 
			this->Re_minutos_limite_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Re_minutos_limite_txt->FormattingEnabled = true;
			this->Re_minutos_limite_txt->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04",
					L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22",
					L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40",
					L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58",
					L"59"
			});
			this->Re_minutos_limite_txt->Location = System::Drawing::Point(191, 23);
			this->Re_minutos_limite_txt->Name = L"Re_minutos_limite_txt";
			this->Re_minutos_limite_txt->Size = System::Drawing::Size(66, 21);
			this->Re_minutos_limite_txt->TabIndex = 27;
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(163, 104);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(100, 20);
			this->id_txt->TabIndex = 2;
			// 
			// prioridad_txt
			// 
			this->prioridad_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->prioridad_txt->FormattingEnabled = true;
			this->prioridad_txt->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->prioridad_txt->Location = System::Drawing::Point(163, 142);
			this->prioridad_txt->Name = L"prioridad_txt";
			this->prioridad_txt->Size = System::Drawing::Size(100, 21);
			this->prioridad_txt->TabIndex = 14;
			// 
			// Agregar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 415);
			this->Controls->Add(this->prioridad_txt);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->descripcion_txt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Agregar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Agregar";
			this->Load += gcnew System::EventHandler(this, &Agregar::Agregar_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		Evento* Creado = new Evento();
		ListaEventos* ListaPrueba = new ListaEventos();
		String^ fech = "";
		bool nuevoEvento = false;
		

	private: bool EstanLLenos(String^ tipo)
	{
		if (id_txt->Text == "" || prioridad_txt->SelectedItem == nullptr || descripcion_txt->Text == "" || comboBox1->Text == "")
		{
			return false;
		}
		if (tipo == "Actividad")
		{
			if (Ac_minutos_fin_txt->SelectedItem == nullptr || Ac_hora_fin_txt->SelectedItem == nullptr || Ac_hora_inicio_txt->SelectedItem == nullptr ||Ac_minutos_inicio_txt->SelectedItem == nullptr || Ac_lugar_txt->Text == "" || Ac_materiales_txt->Text == "" || Ac_personas_txt->Text == "")
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		if (tipo == "Recordatorio")
		{
			if (Re_hora_limite_txt->SelectedItem == nullptr || Re_minutos_limite_txt->SelectedItem == nullptr)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		if (tipo == "Alarma")
		{
			if (Ala_hora_txt->SelectedItem == nullptr || Ala_minutos_txt->SelectedItem == nullptr)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (comboBox1->Text == "Actividad")
		{
			Re_hora_limite_txt->Enabled = false;
			Re_minutos_limite_txt->Enabled = false;
			Ala_hora_txt->Enabled = false;
			Ala_minutos_txt->Enabled = false;
			button1->Enabled = true;
			Ac_hora_fin_txt->Enabled = true;
			Ac_minutos_fin_txt->Enabled = true;
			Ac_hora_inicio_txt->Enabled = true;
			Ac_minutos_inicio_txt->Enabled = true;
			Ac_lugar_txt->Enabled = true;
			Ac_materiales_txt->Enabled = true;
			Ac_personas_txt->Enabled = true;

		}
		if (comboBox1->Text == "Recordatorio")
		{
			Ala_hora_txt->Enabled = false;
			Ala_minutos_txt->Enabled = false;
			Ac_hora_fin_txt->Enabled = false;
			Ac_minutos_fin_txt->Enabled = false;
			Ac_hora_inicio_txt->Enabled = false;
			Ac_minutos_inicio_txt->Enabled = false;
			Ac_lugar_txt->Enabled = false;
			Ac_materiales_txt->Enabled = false;
			Ac_personas_txt->Enabled = false;
			button1->Enabled = true;
			Re_hora_limite_txt->Enabled = true;
			Re_minutos_limite_txt->Enabled = true;

		}
		if (comboBox1->Text == "Alarma")
		{
			Ala_hora_txt->Enabled = true;
			Ala_minutos_txt->Enabled = true;
			Re_hora_limite_txt->Enabled = false;
			Re_minutos_limite_txt->Enabled = false;
			Ac_hora_fin_txt->Enabled = false;
			Ac_minutos_fin_txt->Enabled = false;
			Ac_hora_inicio_txt->Enabled = false;
			Ac_minutos_inicio_txt->Enabled = false;
			Ac_lugar_txt->Enabled = false;
			Ac_materiales_txt->Enabled = false;
			Ac_personas_txt->Enabled = false;
			button1->Enabled = true;
		}
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}

public: System::Void ReiniciarForm()
{
	nuevoEvento = false;
	fech = "";
	comboBox1->SelectedItem = nullptr;
	id_txt->Text = "";
	prioridad_txt->SelectedItem = nullptr;
	descripcion_txt->Text = "";
	Ac_hora_inicio_txt->SelectedItem = nullptr;
	Ac_minutos_inicio_txt->SelectedItem = nullptr;
	Ac_hora_fin_txt->SelectedItem = nullptr;
	Ac_minutos_fin_txt->SelectedItem = nullptr;
	Ac_lugar_txt->Text = "";
	Ac_materiales_txt->Text = "";
	Ac_personas_txt->Text = "";
	Re_hora_limite_txt->SelectedItem = nullptr;
	Re_minutos_limite_txt->SelectedItem = nullptr;
	Ala_hora_txt->SelectedItem = nullptr;
	Ala_minutos_txt->SelectedItem = nullptr;
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Agregar_Load(System::Object^ sender, System::EventArgs^ e) 
{
	button1->Enabled = false;
	Re_hora_limite_txt->Enabled = false;
	Re_minutos_limite_txt->Enabled = false;
	Ala_hora_txt->Enabled = false;
	Ala_minutos_txt->Enabled = false;
	Ac_hora_fin_txt->Enabled = false;
	Ac_minutos_fin_txt->Enabled = false;
	Ac_hora_inicio_txt->Enabled = false;
	Ac_minutos_inicio_txt->Enabled = false;
	Ac_lugar_txt->Enabled = false;
	Ac_materiales_txt->Enabled = false;
	Ac_personas_txt->Enabled = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ Tipo_de_evento = comboBox1->Text;
	
	if (EstanLLenos(Tipo_de_evento))
	{
		try
		{
			String^ DeshacerComas = descripcion_txt->Text;
			String^ AuxDeshacer = "";
			for (int i = 0; i < DeshacerComas->Length; i++)
			{
				if (Convert::ToString(DeshacerComas[i]) == ",")
				{
					AuxDeshacer += ".";
				}
				else
				{
					AuxDeshacer += Convert::ToString(DeshacerComas[i]);
				}
			}
			descripcion_txt->Text = AuxDeshacer;
			int ID = Convert::ToInt32(id_txt->Text);
			char* cad2 = (char*)(void*)Marshal::StringToHGlobalAnsi(fech);
			std::string fecha_convertida = cad2;
			
			if (true)
			{
				int prioridad = Convert::ToInt32(prioridad_txt->Text);
				//Se convierte Descripción
				String^ Descri = descripcion_txt->Text;
				char* cad1 = (char*)(void*)Marshal::StringToHGlobalAnsi(Descri);
				std::string descripcion_convertida = cad1;
				//Fin
				//Se convierte fecha
				/*
				String^ fech = Convert::ToString(dateTimePicker1->Value);
				String^ temp = "";
				int i = 0;
				while (Convert::ToString(fech[i]) != " ")
				{
					temp += Convert::ToString(fech[i]);
					i++;
				}
				fech = temp;
				*/
				//Fin 
				if (Tipo_de_evento == "Actividad")
				{
					Evento* Actividad = new Evento();
					//Se convierte Hora Inicio
					String^ HoraIn = Ac_hora_inicio_txt->Text + ":" + Ac_minutos_inicio_txt->Text;
					char* c1 = (char*)(void*)Marshal::StringToHGlobalAnsi(HoraIn);
					std::string horaIN_convertida = c1;
					//Fin
					//Se convierte Hora final
					String^ HoraFin = Ac_hora_fin_txt->Text + ":" + Ac_minutos_fin_txt->Text;
					char* c2 = (char*)(void*)Marshal::StringToHGlobalAnsi(HoraFin);
					std::string HoraEND_convertida = c2;
					//Fin
					//Se convierte Lugar
					String^ Lug = Ac_lugar_txt->Text;
					char* c3 = (char*)(void*)Marshal::StringToHGlobalAnsi(Lug);
					std::string Lugar_convertida = c3;
					//Fin
					//Se convierte Materiales
					String^ Mate = Ac_materiales_txt->Text;
					char* c4 = (char*)(void*)Marshal::StringToHGlobalAnsi(Mate);
					std::string materiales_convertida = c4;
					//Fin
					//Se convierte Personas
					String^ pers = Ac_personas_txt->Text;
					char* c5 = (char*)(void*)Marshal::StringToHGlobalAnsi(pers);
					std::string personas_convertida = c5;
					//Fin
					Actividad->CrearActividad(ID, prioridad, descripcion_convertida, fecha_convertida, horaIN_convertida, HoraEND_convertida, Lugar_convertida, materiales_convertida, personas_convertida);
					Creado = Actividad;
					ListaPrueba->Agregar(Creado);

				}
				else if (Tipo_de_evento == "Recordatorio")
				{
					Evento* Recordatorio = new Evento();
					String^ HoraL = Re_hora_limite_txt->Text + ":" + Re_minutos_limite_txt->Text;
					char* c = (char*)(void*)Marshal::StringToHGlobalAnsi(HoraL);
					std::string Hora_limite_convertida = c;
					Recordatorio->CrearRecordatorio(ID, prioridad, descripcion_convertida, fecha_convertida, Hora_limite_convertida);
					Creado = Recordatorio;
					ListaPrueba->Agregar(Creado);
				}
				else if (Tipo_de_evento == "Alarma")
				{
					Evento* Alarma = new Evento();
					String^ Hora_Sonar = Ala_hora_txt->Text + ":" + Ala_minutos_txt->Text;
					char* c = (char*)(void*)Marshal::StringToHGlobalAnsi(Hora_Sonar);
					std::string hora_sonar_convertida = c;
					Alarma->CrearAlarma(ID, prioridad, descripcion_convertida, fecha_convertida, hora_sonar_convertida);
					Creado = Alarma;
					ListaPrueba->Agregar(Creado);
				}
				MessageBox::Show("Se guardó su evento " + Tipo_de_evento);
				nuevoEvento = true;
				this->Close();
			}
			else
			{
				MessageBox::Show("Ingresó un identificador repetido para este día. Por favor, cambielo.");
			}
		}
		catch (...)
		{
			MessageBox::Show("Uno de los datos no se ingresó correctamente. Por favor revise los parámetros del Evento.");
		}
	}
	else
	{
		MessageBox::Show("Faltan datos por ingresar para la actividad seleccionada.");
	}
}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
