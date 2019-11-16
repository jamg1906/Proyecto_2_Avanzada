#include "Evento.h"


void Evento::CrearActividad(int IDentificador, int P, std::string descripcion, std::string fecha, std::string HoraInicio, std::string HoraFin, std::string lugar, std::string Materiales, std::string personas)
{
	//MÉTODO PARA CREAR UN EVENTO TIPO ACTIVIDAD.
	Identificador = IDentificador;
	prioridad = P;
	Descripción = descripcion;
	Fecha = fecha;
	Hora_Inicio_Ac = HoraInicio;
	Hora_Fin_Ac = HoraFin;
	Lugar_Ac = lugar;
	Materiales_Ac = Materiales;
	Personas_Ac = personas;
	Tipo = "Actividad";
}

void Evento::CrearRecordatorio(int ID, int P, std::string descri, std::string fechita, std::string HoraLimite)
{
	//MÉTODO PARA CREAR UN EVENTO TIPO RECORDATORIO
	Identificador = ID;
	prioridad = P;
	Descripción = descri;
	Fecha = fechita;
	Hora_Limite_R = HoraLimite;
	Tipo = "Recordatorio";
}

void Evento::CrearAlarma(int ID, int P, std::string descri, std::string fechita, std::string Hora)
{
	//MÉTODO PARA CREAR UN EVENTO TIPO ALARMA
	Hora_Alarma = Hora;
	Identificador = ID;
	prioridad = P;
	Descripción = descri;
	Fecha = fechita;
	Tipo = "Alarma";
}

System::String^ Evento::Mostrar(Evento* E)
{
	//FUNCION QUE MUESTRA UN EVENTO DEPENDIENDO DEL TIPO QUE SEA Y REGRESA UN STRING.
	System::String^ respuesta = "";
	System::String^ temp1 = gcnew System::String(E->Descripción.c_str());
	if (E->Tipo == "Actividad")
	{
		System::String^ temp2 = gcnew System::String(E->Hora_Inicio_Ac.c_str());
		System::String^ temp3 = gcnew System::String(E->Hora_Fin_Ac.c_str());
		System::String^ temp4 = gcnew System::String(E->Lugar_Ac.c_str());
		System::String^ temp5 = gcnew System::String(E->Materiales_Ac.c_str());
		System::String^ temp6 = gcnew System::String(E->Personas_Ac.c_str());
		respuesta = "ACTIVIDAD\n" + temp1 + "\n\n" + "ID: " + Identificador + "\n\n" + "Prioridad: " + prioridad + "\n\n" + "Hora de inicio: " + temp2 + "\n\n" + "Hora de finalización: " + temp3;
		respuesta += "\n\n" + "Lugar: " + temp4 + "\n\n" + "Materiales: " + temp5 + "\n\nPersonas: " + temp6 + "\n";
	}
	else if (E->Tipo == "Recordatorio")
	{
		System::String^ temp7 = gcnew System::String(E->Hora_Limite_R.c_str());
		respuesta = "RECORDATORIO\n" + temp1 + "\n\n" + "ID: " + Identificador + "\n\n" + "Prioridad: " + prioridad + "\n\n" + "Hora límite: " + temp7 + "\n";
	}
	else if (E->Tipo == "Alarma")
	{
		System::String^ temp8 = gcnew System::String(E->Hora_Alarma.c_str());
		respuesta = "ALARMA\n" + temp1 + "\n\n" + "ID: " + Identificador + "\n\n" + "Prioridad: " + prioridad + "\n\n" + "Hora: " + temp8 + "\n";
	}
	return respuesta;
}
