#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class Persona {
public:
	Persona();
	Persona(string nombre,string cedula,string ingreso,string linea,string numero,string correo,string tarifa);
	~Persona();
	string getNombre();
	string getCed();
	string getIngreso();
	string getLinea();
	string getNum();
	string getCorreo();
	string getTarifa();
	string toString();
	virtual void Guardado(ofstream&);
	static Persona *Leer(ifstream&);
private:
	string nombre,cedula,ingreso,linea,numero,correo,tarifa;
};

#endif

