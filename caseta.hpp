#pragma once
#include <string>
#include <vector>
#include "registro.hpp" 
#include "operador.hpp"
#include "vehiculo.hpp"

using namespace std;

class Caseta{
private:
Operador* operador;
vector<Registro*>registros;
int dinero;
int carros;
int motos;
int buses;
int camiones;

public:
Caseta(Operador* o);
~Caseta();

void regristrarvehiculo(Vehiculo* v);

int getDinero()const;
int getCarros()const;
int getMotos()const;
int getBuses()const;
int getCamiones()const;
};