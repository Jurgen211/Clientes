#include "Persona.h"
Persona::Persona(){
	
}

Persona::Persona(string nombre,string cedula,string ingreso,string linea,string numero,string correo,string tarifa) {
	nombre=nombre;
	cedula=cedula;
	ingreso=ingreso;
	linea=linea;
	numero=numero;
	correo=correo;
	tarifa=tarifa;
}

Persona::~Persona() {
	
}


string Persona::getNombre ( ) {
	return nombre;
}

string Persona::getCed ( ) {
	return  cedula;
}

string Persona::getIngreso ( ) {
	return ingreso;
}

string Persona::getLinea ( ) {
	return linea;
}

string Persona::getNum ( ) {
	return numero;
}

string Persona::getCorreo ( ) {
	return correo;
}

string Persona::getTarifa ( ) {
	return tarifa;
}

string Persona::toString(){
	stringstream x;
	
	x<<"Nombre: \n"<<getNombre();
	x<<"Cedula: \n"<<getCed();
	x<<"Ingreso: \n"<<getIngreso();
	x<<"Linea: \n"<<getLinea();
	x<<"Numero: \n"<<getNum();
	x<<"Correo: \n"<<getCorreo();
	x<<"tarifa: \n"<<getTarifa();
	
	return x.str();
}
void Persona:: Guardado(ofstream& estFile){
	cout << "    <<Guardando...>>" << endl;
	cout << toString() << endl;
	estFile << nombre  << endl
		<< cedula << endl
		<< ingreso << endl
		<<linea << endl
		<< numero << endl
		<< correo << endl
		<< tarifa<< endl;
}

Persona *Persona::Leer(ifstream& estFile){
	string nombre,cedula,ingreso,linea,numero,correo,tarifa;
	
	if (!(estFile >> nombre)) { return NULL; }
	if (!(estFile >> cedula)) { return NULL; }
	if (!(estFile >> ingreso)) { return NULL; }
	if (!(estFile >> linea)){ return NULL;}
	if (!(estFile >> numero)){ return NULL; }
	if (!(estFile >> correo)){ return NULL; }
	if (!(estFile >> tarifa)){ return NULL; }
	
	return new Persona(nombre,cedula,ingreso,linea,numero,correo,tarifa);
	
}
