#pragma once
#include <string>

class Evento
{
	//Estos serán mis "Nodos"
public:
	Evento* Siguiente = nullptr;
	//Variable de tipo de la actividad que será el evento.
	std::string Tipo;
	int Identificador;
	int prioridad;
	std::string Descripción;
	std::string Fecha;

	//Atributos actividades
	std::string Hora_Inicio_Ac;
	std::string Hora_Fin_Ac;
	std::string Lugar_Ac;
	std::string Materiales_Ac;
	std::string Personas_Ac;

	//Atributos recordatorios
	std::string Hora_Limite_R;

	//Atributos Alarma
	std::string Hora_Alarma;





public:
	void CrearActividad(int identificador, int prioridad, std::string Descripcion, std::string fecha, std::string Hora_In, std::string Hora_fin, std::string lugar, std::string materiales, std::string personas);
public:
	void CrearRecordatorio(int identificador, int prioridad, std::string Descripcion, std::string Fecha, std::string Hora_Limite_R);
public:
	void CrearAlarma(int identificador, int prioridad, std::string Descripcion, std::string fecha, std::string Hora_Alarma);
	System::String^ Mostrar(Evento *E);



};

