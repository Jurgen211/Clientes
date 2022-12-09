#include "nodo.h"


nodo::nodo(Persona*  t, nodo* s) {
	info = t;
	sig = s;
}
nodo:: ~nodo() {
}
void nodo::setInfo(Persona* t) { info = t; }
Persona*  nodo::getInfo() { return info; }
void nodo::setSig(nodo* s) { sig = s; }
nodo* nodo::getSig() { return sig; }

string nodo::toStringNodo() {
	return  info->toString();
}


