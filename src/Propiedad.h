/*
 * Propiedad.h
 *
 *  Created on: 20 nov. 2022
 *      Author: Marcelo
 */

#ifndef PROPIEDAD_H_
#define PROPIEDAD_H_
#include <iostream>
#include <vector>
#include "Cliente.h"
#include "Inmueble.h"
#include "Particular.h"
#include "Inmobiliaria.h"
using namespace std;

class Propiedad : public Inmueble{
private:
	int habitaciones, banos, cocheras, suites;
	Propietario * prop;
public:
	Propiedad();
	Propiedad(float, float, string, estados, Propietario *, int, int, int, int);
	void mostrarInfo();
	~Propiedad();
};

#endif /* PROPIEDAD_H_ */
