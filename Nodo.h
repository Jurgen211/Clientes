#ifndef NODO_H
#define NODO_H
#include <iostream>
#include "Persona.h"
using namespace std;

class nodo
{
private:
	Persona*  info;
	nodo * sig;
public:
	nodo(Persona*, nodo*);
	~nodo();
	void setInfo(Persona*);
	Persona* getInfo();
	void setSig(nodo*);
	nodo* getSig();
	string toStringNodo();
};

#endif

