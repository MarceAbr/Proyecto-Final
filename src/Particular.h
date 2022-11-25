/*
 * Particular.h
 *
 *  Created on: 14 nov. 2022
 *      Author: Marcelo
 */

#ifndef PARTICULAR_H_
#define PARTICULAR_H_

#include <iostream>
#include "Propietario.h"
using namespace std;

class Particular : public Propietario {
private:
	string horarios;
public:
	Particular();
	Particular(string, string, string, string);
	bool esParticular();
	void mostrarInfo();
	~Particular();
};



#endif /* PARTICULAR_H_ */
