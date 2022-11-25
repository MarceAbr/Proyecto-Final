/*
 * Inmobiliaria.cpp
 *
 *  Created on: 14 nov. 2022
 *      Author: Marcelo
 */

#include "Inmobiliaria.h"

Inmobiliaria::Inmobiliaria(string mail, string tel, string direc, string web, float porcentaje) : Propietario(mail, tel, direc){
	this->sitio = web;
	this->porcentaje = porcentaje;
}

void Inmobiliaria::mostrarInfo(){
	Propietario::mostrarInfo();
	cout<<"Sitio Web: "<<this->sitio<<endl;
	cout<<"Porcentaje: "<<this->porcentaje<<endl;
}

bool Inmobiliaria::esParticular(){
	return false;
}

Inmobiliaria::~Inmobiliaria(){};

