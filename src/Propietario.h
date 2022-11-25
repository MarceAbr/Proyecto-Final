/*
 * Propietario.h
 *
 *  Created on: 14 nov. 2022
 *      Author: Marcelo
 */

#ifndef PROPIETARIO_H_
#define PROPIETARIO_H_

#include <iostream>
using namespace std;

class Propietario{
private:
	static int contador;
	int id;
	string email, telefono, direccion;
public:
	Propietario();
	Propietario(string, string, string);
	virtual void mostrarInfo() = 0;
	int getID();
	virtual float obtenerRecargo();
	virtual ~Propietario();
};

#endif /* PROPIETARIO_H_ */
