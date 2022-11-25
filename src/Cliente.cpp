/*
 * Cliente.cpp
 *
 *  Created on: 12 nov. 20222
 *      Author: Marcelo
 */

#include "Cliente.h"
int Cliente::contador = 0;

Cliente::Cliente(string nomb, string mail, string tel){
	this->nombre = nomb;
	this->mail = mail;
	this->telefono = tel;
	this->contador++;
	this->id = contador;
}

void Cliente::mostrarInfo(){
	cout<<"ID cliente: "<<this->id<<endl;
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Email: "<<this->mail<<endl;
	cout<<"Telefono: "<<this->telefono<<endl;
}

int Cliente::getID(){
	return this->id;
}

//void Cliente::agregarInmueble(Inmueble * aux){
//	listaInmuebles.insert(listaInmuebles.end(), aux);
//}

Cliente::~Cliente(){}
