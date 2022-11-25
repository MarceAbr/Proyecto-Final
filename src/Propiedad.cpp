/*
 * Propiedad.cpp
 *
 *  Created on: 20 nov. 2022
 *      Author: Marcelo
 */

#include "Propiedad.h"

Propiedad::Propiedad(float sup, float prec, string direc, estados est, Propietario * prop, int hab, int banos, int cocheras, int suites) : Inmueble(sup, prec, direc, est){
	this->prop = prop;
	this->habitaciones = hab;
	this->banos = banos;
	this->cocheras = cocheras;
	this->suites = suites;
}

void Propiedad::mostrarInfo(){
	Inmueble::mostrarInfo();
	cout<<endl;
	this->prop->mostrarInfo();
	cout<<endl;
	cout<<"Habitaciones: "<<this->habitaciones<<endl;
	cout<<"Banos: "<<this->banos<<endl;
	cout<<"Cocheras: "<<this->cocheras<<endl;
	cout<<"Suites: "<<this->suites<<endl;
}

Propiedad::~Propiedad(){}
