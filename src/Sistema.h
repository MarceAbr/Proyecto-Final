/*
 * Sistema.h
 *
 *  Created on: 21 nov. 2022
 *      Author: Marcelo
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_

#include <iostream>
#include "Cliente.h"
#include "Inmueble.h"
#include "Inmobiliaria.h"
#include "Particular.h"
#include "Terreno.h"
#include <vector>
using namespace std;

class Sistema {
private:
	vector<Propietario*> propietarios;
	vector<Cliente*> clientes;
	vector<Inmueble*>inmuebles;
public:
	Sistema();
	void crearCliente(string, string, string);
	void crearInmobiliaria(string, string, string, string, float);
	void crearParticular(string, string, string, string);
	void crearTerreno(float, float, string, estados, int id);
	void agregarClienteAInmueble(int, int);
	void mostrarClientes();
	void mostrarInmuebles();
//	void mostrarClientesInteresado(int);
	~Sistema();
};



#endif /* SISTEMA_H_ */
