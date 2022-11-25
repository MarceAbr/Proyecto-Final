/*
 * Inmueble.h
 *
 *  Created on: 12 nov. 2022
 *      Author: Marcelo
 */

#ifndef INMUEBLE_H_
#define INMUEBLE_H_
#include "Propietario.h"
#include "Cliente.h"
#include <iostream>
#include <vector>
using namespace std;
enum estados {alquiler, venta, noDisponible};

class Inmueble{
private:
	static int contador;
	int id;
	float superficie, precio;
	string direccion;
	estados estado;
public:
	Inmueble();
	Inmueble(float, float, string, estados);
	virtual void mostrarInfo() = 0;
	virtual void mostrarClientesInteresados();
	virtual int getID();
	float getPrecio();
	void agregarCliente(Cliente *);
	float calcularPrecio();
	virtual ~Inmueble();
};


#endif /* INMUEBLE_H_ */
