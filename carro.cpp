#include <iostream>
#include "carro.h"
#include "excepcion.hpp"
#include "variante.hpp"

using namespace std;

Carro::Carro(string placa, int cantidadpasajeros): Vehiculo(placa){
  if(cantidadpasajeros < 1) {
    throw DatosInvalosExcepcion("un carro debe llevar al menos un pasajero");
  }
 this->cantidadpasajeros = "";
}
Carro::~Carro(){
  cout << "destruyendo carro" << this->placa<<endl;
}

void Carro::setCantidpasajeros(int cantidadpasajeros) {
if (cantidadpasajeros < 1){
  throw DatosInvalosExcepcion("un carro debe llevar al menos un pasajero");

}
 this->cantidadpasajeros= cantidadpasajeros;
 }

int Carro::getCantidadPasajeros()cont { 
  return this->cantidadpasajeros; }


  string Carro::getTipo() const{
    return "carro";
  }

  int Carro::cobrar() const{
    return 10000+200*UNIDAD;
  }

  string Carro:: resumen()const{
    return Vehiculo:: resumen() + ",pasajeros: "+ to_string(this->cantidadpasajeros);

  }
