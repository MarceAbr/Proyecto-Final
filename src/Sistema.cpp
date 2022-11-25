/*
 * Sistema.cpp
 *
 *  Created on: 21 nov. 2022
 *      Author: Marcelo
 */

#include "Sistema.h"

Sistema::Sistema(){

}

void Sistema::crearCliente(string nomb, string mail, string tel){
	Cliente * cliente = new Cliente(nomb, mail, tel);
	clientes.insert(clientes.end(), cliente);
}

void Sistema::crearInmobiliaria(string mail, string tel, string direc, string web, float porcent){
	Propietario * prop = new Inmobiliaria(mail, tel, direc, web, porcent);
	propietarios.insert(propietarios.end(), prop);
}

void Sistema::crearParticular(string mail, string tel, string direc, string hora){
	Propietario * prop = new Particular(mail, tel, direc, hora);
	propietarios.insert(propietarios.end(), prop);
}

void Sistema::crearTerreno(float sup, float prec, string direc, estados est, int id){
	Propietario * aux; // auxiliar para guardar le propietario

	/*Con esto busco el propietario para ponerle al inmueble ya que el sistema es el
	que crea el propietario*/
	if(id != 0){
		vector<Propietario*>::iterator it;
		for (it=propietarios.begin(); it!=propietarios.end(); ++it){
			if((*it)->getID() == id)
				aux = (*it);
		}
		Terreno * inmueble = new Terreno(sup, prec, direc, est, aux);
		inmuebles.insert(inmuebles.end(), inmueble); //inserta el inmueble al vector del sistema
	} else {
		cout<<"No exite tal propietario"<<endl;
	}

}

void Sistema::agregarClienteAInmueble(int clienteID, int inmuebleID){
	Cliente * cli;
	Inmueble * inmu;

	vector<Cliente*>::iterator it1; // Busca el id del cliente y lo asigna al auxiliar cli
	for (it1=clientes.begin(); it1!=clientes.end(); ++it1){
		if(clienteID == (*it1)->getID()){
			cli = (*it1);
		}
	}

	vector<Inmueble*>::iterator it2; // Busca el id del cliente y lo asigna al auxiliar inmu
	for (it2=inmuebles.begin(); it2!=inmuebles.end(); ++it2){
		if(inmuebleID == (*it2)->getID()){
			inmu = (*it2);
		}
	}

	inmu->agregarCliente(cli); //Agrega el cliente al vector que esta en Terreno

}

void Sistema::mostrarClientes(){
	vector<Cliente*>::iterator it;
	for (it=clientes.begin(); it!=clientes.end(); ++it){
		(*it)->mostrarInfo();
		cout<<endl;
		cout<<"----------------"<<endl;
	}
}

void Sistema::mostrarInmuebles(){
	vector<Inmueble*>::iterator it;
	for (it=inmuebles.begin(); it!=inmuebles.end(); ++it){
		(*it)->mostrarInfo();
		cout<<endl;
		cout<<"----------------"<<endl;
	}
}

// REVISAR
//void Sistema::mostrarClientesInteresado(int id){
//	vector<Inmueble*>::iterator it;
//	for (it=inmuebles.begin(); it!=inmuebles.end(); ++it){
//		if((*it)->getID() == id){
//			(*it)->mostrarClientesInteresados();
//		}
//	}
//}

Sistema::~Sistema(){}
