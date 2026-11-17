#include <iostream>
#include "bus.hpp"
#include "excepciones.hpp"


using namespace std;

Bus::Bus(string placa, int puestos): Vehiculo(placa){
  if(puestos < 1){
    throw DatosInvalidosException ("El bus debe tener al menos un puestos");
  }
  this->puestos= puestos;
}
Bus::~Bus(){
  cout <<"destruyendo busss"<< this->placa<<endl;
}

void Bus::setPuestos(int puestos) {
    if(puestos < 1){
    throw DatosInvalidosException ("El bus debe tener al menos un puestos");
  }
   this->puestos= puestos;
  } 

int Bus::getPuestos() const {
   return this->puestos;  
  }

string Bus::getTipo() const{
  return "Bus";
}

int Bus::cobrar() const{
  return 14000 + 300 * 2;
}

string Bus::resumen() const {
  return Vehiculo::resumen() + ", puestos: " + to_string(this->puestos);
}




