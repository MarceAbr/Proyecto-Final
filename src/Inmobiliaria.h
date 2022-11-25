/*
 * Inmobiliario.h
 *
 *  Created on: 14 nov. 2022
 *      Author: Marcelo
 */

#ifndef INMOBILIARIA_H_
#define INMOBILIARIA_H_
#include <iostream>
#include "Propietario.h"
using namespace std;

class Inmobiliaria : public Propietario {
private:
	string sitio;
	float porcentaje;
public:
	Inmobiliaria();
	Inmobiliaria(string, string, string, string, float);
	bool esParticular();
	void mostrarInfo();
	~Inmobiliaria();
};


#endif /* INMOBILIARIA_H_ */
