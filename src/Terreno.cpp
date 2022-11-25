/*
 * Terreno.cpp
 *
 *  Created on: 19 nov. 2022
 *      Author: Marcelo
 */

#include "Terreno.h"

Terreno::Terreno(float sup, float prec, string direc, estados est, Propietario * prop) : Inmueble(sup, prec, direc, est){
	this->prop = prop;
}

void Terreno::mostrarInfo(){
	Inmueble::mostrarInfo();
	cout<<endl;
	this->prop->mostrarInfo();
}

void Terreno::agregarCliente(Cliente * cliente){
	listaCliente.insert(listaCliente.end(), cliente);
}

void Terreno::mostrarClientesInteresados(){
	vector<Cliente*>::iterator it;
	for(it=listaCliente.begin(); it!=listaCliente.end(); it++){
		(*it)->mostrarInfo();
		cout<<endl;
		cout<<"----------------"<<endl;
	}
}

int Terreno::getID(){
	return Inmueble::getID();
}

Terreno::~Terreno(){}
