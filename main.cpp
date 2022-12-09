#include<iostream>
using namespace std;
#include "Lista.h"
int main () {
	
	int opc;
	
	string nombre, cedula, ingreso,linea,numero,correo, tarifa;
	Lista* li=NULL;
	
	cout<<"Ingrese la opcion que le gustaria realizar\n"
	<<"1- Agregar cliente\n"
		<<"2- Ver lista de clientes\n"
		<<"3- Modificar clientes\n"
		<<"4- Eliminar clientes\n"
		<<"5- Salir\n";
		cout<<"\n Digite una opcion para continuar: ";cin>>opc;
	switch(opc){
	case 1: {//agrega
		system ("cls");
		
		
		break;
		
	}case 2:  //ver
		system ("cls");
		
		break;
	case 3://modifica
		system ("cls");
		
		
		break;
	case 4: //eliminar
		system ("cls");
		
		
		break;
	case 5: //salir
		system ("cls");
		cout<<"\n\n\n\n                    Gracias por usarme :)";
		return (-1);
		break;
	}
	return 0;
}

