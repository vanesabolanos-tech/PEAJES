#include <iostream>
#include "camion.hpp"
#include "excepcion.hpp"
#include "variante.hpp"

using namespace std;

Camion::Camion(string placa, int cantidadEjes) : Vehiculo(placa){
  if(cantidadEeje < 2){
    throw DatosInvalosExcepcion("un camion debe de llevar al menos dos ejes");
 }
  this->cantidadEjes = cantidadEjes;

}
Camion::~Camion(){
  cout<< "destruyendo camion"<< this->placa<<endl;
}


void Camion::setCantidadEjes(int cantidadEjes) {
   if(cantidadEeje < 2){
    throw DatosInvalosExcepcion("un camion debe de llevar al menos dos ejes");
  }
   this->cantidadEjes = cantidadEjes; 
}

int Camion::getCantidadEjes()const { 
  return this->cantidadEjes; 
}

string Camion :: getTipo() const{
  return "Camion";
}

int Camion :: cobrar() const{
  return (8000 + 100* UNIDAD)*cantidadEjes;
}

string Camion:: resumen()const {
  return Vehiculo::resumen() + ", cantidad de ejes"+ to_string(this->cantidadEjes);

}
