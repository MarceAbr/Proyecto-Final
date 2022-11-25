/*
 * Particular.cpp
 *
 *  Created on: 14 nov. 2022
 *      Author: Marcelo
 */

#include "Particular.h"

Particular::Particular(string mail, string tel, string direc, string hora) : Propietario(mail, tel, direc){
	this->horarios = hora;
}

void Particular::mostrarInfo(){
	Propietario::mostrarInfo();
	cout<<"Hoirarios para llamar: "<<this->horarios<<endl;
}

bool Particular::esParticular(){
	return true;
}

Particular::~Particular(){};


