/*
 * Cliente.h
 *
 *  Created on: 12 nov. 2022
 *      Author: Marcelo
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <iostream>
#include <vector>
using namespace std;

class Cliente{
private:
	static int contador;
	int id;
	string nombre, mail, telefono;
public:
	Cliente();
	Cliente(string, string, string);
	void mostrarInfo();
	int getID();
	~Cliente();
};



#endif /* CLIENTE_H_ */
