#include "ListaEventos.h"

void ListaEventos::Agregar(Evento* E)
{
	//M�TODO QUE AGREGA ELEMENTOS A LA LISTA AL PRINCIPIO.
	E->Siguiente = nullptr;
	if (Head == nullptr)
	{
		Head = E;
	}
	else
	{
		Evento* Aux = new Evento();
		E->Siguiente = Head;
		Head = E;
	}
}

void ListaEventos::BorrarLista(ListaEventos L)
{
	/*
	L.Head->Siguiente = nullptr;
	L.Head = nullptr;
	End->Siguiente = nullptr;
	L.End = nullptr;*/
}

bool ListaEventos::ExisteID(std::string fecha, ListaEventos L, int id)
{
	//M�TODO QUE VALIDA SI EL ID YA EXISTE Y SE REPITE HASTA QUE ENCUENTRA UNO DISPONIBLE
	Evento* Aux = new Evento();
	Aux = L.Head;
	if (id < 1)
	{
		return false;
	}
	while (Aux != nullptr)
	{
		if (Aux->Fecha == fecha && Aux->Identificador == id)
		{
			return false;
		}
		Aux = Aux->Siguiente;
	}
	return true;
}

void ListaEventos::EliminarEvento(std::string fecha, ListaEventos *L, int id)
{
	//M�TODO QUE SE ENCARGA DE ELIMINAR UN EVENTO FILTRANDO POR FECHA Y ID.
	try
	{
		Evento* Aux = new Evento();
		Evento* Ant = new Evento();
		Ant = nullptr;
		bool SeBorro = false;
		Aux = L->Head;

		while (Aux != nullptr)
		{
			if (Aux->Fecha == fecha && Aux->Identificador == id)
			{
				
				if (SeBorro == false)
				{
					if (L->Head->Fecha == fecha && L->Head->Identificador == id)
					{
						L->Head = Aux->Siguiente;
					}
					else if (Aux->Siguiente == nullptr)
					{
						Ant->Siguiente = nullptr;
					}
					else
					{
						Ant->Siguiente = Aux->Siguiente;
						//Entonces no es el head
					}
					SeBorro = true;
				}
				//Aqu� borrar
			}
			if (SeBorro)
			{
				Aux = nullptr;
			}
			else
			{
				Ant = Aux;
				Aux = Aux->Siguiente;
			}
		}

		if (SeBorro)
		{
			System::Windows::Forms::MessageBox::Show("Se borr� el evento de la agenda satisfactoriamente.");
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("No se pudo encontrar el evento.");
		}
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("ERROR EN FUNCION BORRAR.");
	}
}

System::String^ ListaEventos::Mostrar_Eventos_Dia(std::string fecha, ListaEventos L)
{
	//M�TODO QUE MUESTRA LOS EVENTOS DE UN D�A EN CONCRETO Y LOS DEVUELVE CONCATENADOS EN UN STRING
	System::String^ Res = "";
	Evento* Temp = new Evento();
	Temp = L.Head;
	try
	{
		do
		{
			if (Temp->Fecha == fecha)
			{
				System::String^ t = Temp->Mostrar(Temp);
				if (t != "" && Res == "")
				{
					//------------------------------------------------------
					
					Res += "------------------------------------------------------" + t + "------------------------------------------------------";
				}
				else if (t != "")
				{
					Res += t + "------------------------------------------------------";
				}
			}
			Temp = Temp->Siguiente;
		} while (Temp!= nullptr);
	}
	catch (...)
	{
		
	}
	return Res;
	
}


System::String^ ListaEventos::BuscarEvento(std::string fecha, ListaEventos* L, int id)
{
	//M�TODO QUE BUSCA UN EVENTO ESPECIFICIO FILTRANDO POR FECHA Y ID Y LO DEVUELVE A EL UNICAMENTE EN UN STRING
	System::String^ Res = "";
	Evento* Temp = new Evento();
	bool SeEncontro = false;
	Temp = L->Head;
	try
	{
		while (Temp != nullptr)
		{
			if (Temp->Fecha == fecha && Temp->Identificador == id)
			{
				SeEncontro = true;
				System::String^ t = Temp->Mostrar(Temp);
				Res += "------------------------------------------------------" + t + "------------------------------------------------------";
			}

			Temp = Temp->Siguiente;
		}
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("Ocurri� un error durante la b�squeda del evento.");
	}
	if (SeEncontro == false)
	{
		System::Windows::Forms::MessageBox::Show("No se encontr� el evento.\n�Ingres� correctamente la fecha? Ej: 01/04/2009");
	}
	return Res;
}

System::String^ ListaEventos::MostrarDiaOrdenID(std::string fecha, ListaEventos *L)
{
	//M�TODO QUE ORDENA LOS EVENTOS DE UN D�A POR ID.
	System::String^ Res = "" ;
	Evento* Aux = new Evento();
	Aux = L->Head;
	try
	{
		for (int i = 0; i < 1001; i++)
		{
			while (Aux != nullptr)
			{
				if (Aux->Fecha == fecha && Aux->Identificador == i)
				{
					System::String^ t = Aux->Mostrar(Aux);
					if (t != "" && Res == "")
					{
						//------------------------------------------------------

						Res += "------------------------------------------------------" + t + "------------------------------------------------------";
					}
					else if (t != "")
					{
						Res += t + "------------------------------------------------------";
					}
				}
				Aux = Aux->Siguiente;
			}
			//Ultima Linea
			Aux = L->Head;
		}
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("Ocurri� un error al mostrar ordenados por ID.");
	}
	return Res;

}

System::String^ ListaEventos::MostrarDiaPrioridad(std::string fecha, ListaEventos* L)
{
	//M�TODO QUE MUESTRA ORDENADOS LOS EVENTOS DE UN D�A BASADO EN PRIORIDAD.
	System::String^ Res = "";
	Evento* Aux = new Evento();
	Aux = L->Head;
	try
	{
		for (int i = 0; i < 6; i++)
		{
			while (Aux != nullptr)
			{
				if (Aux->Fecha == fecha && Aux->prioridad == i)
				{
					System::String^ t = Aux->Mostrar(Aux);
					if (t != "" && Res == "")
					{
						//------------------------------------------------------

						Res += "------------------------------------------------------" + t + "------------------------------------------------------";
					}
					else if (t != "")
					{
						Res += t + "------------------------------------------------------";
					}
				}
				Aux = Aux->Siguiente;
			}
			//Ultima Linea
			Aux = L->Head;
		}
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("Ocurri� un error al mostrar ordenados por ID.");
	}
	return Res;
}