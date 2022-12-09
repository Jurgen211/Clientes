#include "Lista.h"

Lista::Lista() {
	primero = NULL;
	actual = NULL;
}

void Lista::insertar(Persona * t){  
	ofstream Guardado;
	ifstream leer;
	system("cls");
	string nombre,cedula,ingreso,linea,numero,correo,tarifa;
	estFile.open("Clientes.txt",ios::out|ios::app);
	cout<<"Nombre ";
	cin>>nombre;
	cout<<"Cedula ";
	cin>>cedula;
	cout<<"Ingreso ";
	cin>>ingreso;
	cout<<"Prepago o Pospago ";
	cin>>linea;
	cout<<"Telefono ";
	cin>>numero;
	cout<<"Correo ";
	cin>>correo;
	cout<<"Monto ";
	cin>>tarifa;
	
	estFile<<nombre<<" "<<cedula<<" "<<ingreso<<" "<<linea<<" "<<numero<<" "<<correo<<" "<<tarifa<<"\n";
	estFile.close();
}


string Lista::toString() {
	actual = primero;
	stringstream s;
	while (actual != NULL)
	{
		s << actual->toStringNodo();
		actual = actual->getSig();
	}
	
	return s.str();
}

int Lista::cuentaNodos() {
	actual = primero;
	int can = 0;
	while (actual != NULL)
	{
		can++;
		actual = actual->getSig();
	}
	return can;
}


bool Lista::listaVacia() {
	return  (primero == NULL) ? true : false;
}


bool Lista::elimina() {
	if (primero == NULL) 
	{
		return false;
	}
	else 
	{
		actual = primero;
		primero = primero->getSig();
		delete actual;
		return true;
	}
}




Lista::~Lista() {
	while (!listaVacia())
	{elimina(); }
}

