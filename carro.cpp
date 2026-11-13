#include <iostream>
#include "carro.hpp"
#include "excepciones.hpp"
#include "variante.hpp"

using namespace std;

Carro::Carro(string placa, int cantidadpasajeros): Vehiculo(placa){
  if(cantidadpasajeros < 1) {
    throw DatosInvalidosException("un carro debe llevar al menos un pasajero");
  }
 this->cantidadpasajeros = cantidadpasajeros;
}
Carro::~Carro(){
  cout << "destruyendo carro" << this->placa<<endl;
}

void Carro::setCantidadpasajeros(int cantidadpasajeros) {
if (cantidadpasajeros < 1){
  throw DatosInvalidosException("un carro debe llevar al menos un pasajero");

}
if(cantidadpasajeros >2){
  throw DatosInvalidosException("la cantidad maxima de pasajeros es 2");
}
 this->cantidadpasajeros= cantidadpasajeros;
 }

int Carro::getCantidadpasajeros()const { 
  return this->cantidadpasajeros; }


  string Carro::getTipo() const{
    return "carro";
  }

  int Carro::cobrar() const{
    return 10000+200*1;
  }

  string Carro:: resumen()const{
    return Vehiculo:: resumen() + ",pasajeros: "+ to_string(this->cantidadpasajeros);

  }
