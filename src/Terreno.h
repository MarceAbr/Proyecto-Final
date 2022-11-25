/*
 * Terreno.h
 *
 *  Created on: 19 nov. 2022
 *      Author: Marcelo
 */

#ifndef TERRENO_H_
#define TERRENO_H_

#include <iostream>
#include <vector>
#include "Inmueble.h"
#include "Particular.h"
#include "Inmobiliaria.h"
using namespace std;

class Terreno : public Inmueble{
private:
	Propietario * prop;
	vector<Cliente*> listaCliente;
public:
	Terreno();
	Terreno(float, float, string, estados, Propietario *);
	void mostrarInfo();
	void mostrarClientesInteresados();
	int getID();
	void agregarCliente(Cliente *);
	~Terreno();
};

#endif /* TERRENO_H_ */
