/*
 * Propietario.cpp
 *
 *  Created on: 14 nov. 2022
 *      Author: Marcelo
 */

#include "Propietario.h"
int Propietario::contador = 0;

Propietario::Propietario(string mail, string tel, string direc){
	this->email = mail;
	this->telefono = tel;
	this->direccion = direc;
	this->contador++;
	this->id = contador;
}

void Propietario::mostrarInfo(){
	cout<<"Email: "<<this->email<<endl;
	cout<<"Telefono: "<<this->telefono<<endl;
	cout<<"Direccion: "<<this->direccion<<endl;
}

int Propietario::getID(){
	return this->id;
}

float Propietario::obtenerRecargo(){

}

Propietario::~Propietario(){};
