/*
 * Inmueble.cpp
 *
 *  Created on: 12 nov. 2022
 *      Author: Marcelo
 */

#include "Inmueble.h"
#include "Particular.h"
#include "Inmobiliaria.h"
#include "Cliente.h"

int Inmueble::contador = 0;

Inmueble::Inmueble(float sup, float precio, string direc, estados est){
	this->superficie = sup;
	this->precio = precio;
	this->direccion = direc;
	this->estado = est;
	this->contador++;
	this->id = contador;
}

void Inmueble::mostrarInfo(){
	cout<<"Superficie: "<<this->superficie<<endl;
	cout<<"Precio: "<<this->precio<<endl;
	cout<<"Direccion: "<<this->direccion<<endl;
	cout<<"Estado: "<<this->estado<<endl;
	cout<<"Precio Final: "<<this->calcularPrecio()<<endl;
}

void Inmueble::mostrarClientesInteresados(){}

int Inmueble::getID(){
	return this->id;
}

void Inmueble::agregarCliente(Cliente * ){
}

float Inmueble::getPrecio(){
	return this->precio;
}

float Inmueble::calcularPrecio(){
	return this->getPrecio() * 1.21;
}

Inmueble::~Inmueble(){};
