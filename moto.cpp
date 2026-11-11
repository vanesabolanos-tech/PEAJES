#include <iostream>
#include "moto.h"
#include "excepcion.hpp"
#include "variante.hpp"

using namespace std;
Moto::Moto()
{
  this->cilindraje= "";
 
}

Moto::Moto(string placa, int cilindraje){
  if(cilindrija <0){
    throw("La moto tiene que tener un cilindraje mayor a cero");
  }
    this->cilindraje= cilindraje;
 }


Moto:: ~Moto(){
  cout<<"destruyendo moto"<< this ->placa<<endl;
}

void Moto::setCilindraje(int cilindraje) { 
   if(cilindrija <0){
    throw("La moto tiene que tener un cilindraje mayor a cero");
  }
  this->cilindraje = cilindraje;
 }
int Camion::getCilindraje() const{
   return this->cilindraje; }


 void setAltocilindraje(string cilindraje){
  if(cilindraje > 400){
  cout<<("La moto es de alto cilindraje");
  }

  string Moto:: getTipo() const{
    return "moto";
  }

  int Moto:: cobrar() const{
    return 3000+100*UNIDAD;
  }

  string Moto::resumen() const{
      return Vehiculo::resumen() + ", cilindraje: " + to_string(this->cilindraje);
  }

 };