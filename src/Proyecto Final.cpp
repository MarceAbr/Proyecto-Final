//============================================================================
// Name        : Proyecto.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Cliente.h"
#include "Inmueble.h"
#include "Terreno.h"
#include "Propiedad.h"
#include "Sistema.h"

int main() {

	Sistema s1;
	s1.crearCliente("Marcelo", "marceloooabregu@gmail.com", "3863693420");
	s1.crearCliente("Braian", "braianAbregu014@hotmail.com", "3815487985");
	s1.crearCliente("Lionel", "lionelmessi10@gmail.com", "1165487952");
	s1.mostrarClientes();


	s1.crearParticular("mar@gmail.com", "3863693421", "AV. Roca", "18:00");


	s1.crearTerreno(554.3, 250000, "Mitre", alquiler, 1);
	s1.crearTerreno(200, 425000, "Rivadavia", alquiler, 1);

	s1.agregarClienteAInmueble(1, 1);
	s1.agregarClienteAInmueble(3, 1);

//	s1.mostrarClientesInteresado(1); REVISAR









//	Particular p1("mar@gmail.com", "3863693421", "AV. Roca", "18:00");
//
//	Terreno t1(554.3, 250000, "Mitre", alquiler, &p1);
//
//	Cliente c1("Marcelo", "marceloooabregu@gmail.com", "3863693420");
//	Cliente c2("Braian", "braianAbregu014@hotmail.com", "3815487985");
//	Cliente c3("Lionel", "lionelmessi10@gmail.com", "1165487952");
//
//	t1.agregarCliente(&c1);
//	t1.agregarCliente(&c3);
//
//	t1.mostrarClientesInteresados();

	return 0;
}
