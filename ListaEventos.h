#pragma once
#include "Evento.h"

class ListaEventos
{
public:
	//DECLARACION DE ATRIBUTOS DE LA LISTA.
	Evento* Head = nullptr;
	Evento* End = nullptr;
	void Agregar(Evento *E);
	System::String^ Mostrar_Eventos_Dia(std::string dia_a_buscar, ListaEventos L);
	System::String^ BuscarEvento(std::string dia_a_buscar, ListaEventos* L, int id);
	bool ExisteID(std::string dia_a_buscar, ListaEventos L, int id);
	void BorrarLista(ListaEventos L);
	void EliminarEvento(std::string dia_a_buscar, ListaEventos *L, int id);
	System::String^ MostrarDiaOrdenID(std::string dia_a_buscar, ListaEventos *L);
	System::String^ MostrarDiaPrioridad(std::string dia_a_buscar, ListaEventos* L);
	

};

