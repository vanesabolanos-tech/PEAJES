#include <iostream>
#include "bus.h"
#include "excepciones.h"
#include "variante.h"

using namespace std;

Bus::Bus(string placa, int puestos): Vehiculo(placa){
  if(puestos < 1){
    throw DatosInvalosExcepcion ("El bus debe tener al menos un puestos");
  }
  this->puestos= puestos;
}
Bus::~bus(){
  cout <<"destruyendo busss"<< this->placa<<endl;
}

void Bus::setPuestos(int puestos) {
    if(puestos < 1){
    throw DatosInvalosExcepcion ("El bus debe tener al menos un puestos");
  }
   this->puestos= puestos;
   }

int Bus::getPuestos() const{
   return this->puestos; 
  }

string Bus::getTipo() const{
  return "Bus";
}

int Bus::cobrar() const{
  return 14000 + 300 * UNIDAD;
}

string Bus::resumen() const {
  return Vehiculo::resumen() + ", puestos: " + to_string(this->puestos);
}




