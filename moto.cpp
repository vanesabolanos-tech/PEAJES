#include <iostream>
#include "moto.hpp"
#include "excepciones.hpp"
#include "variante.hpp"
#include "vehiculo.hpp"

using namespace std;

Moto::Moto(string placa, int cilindraje):Vehiculo(placa){
  if(cilindraje >0){
    throw("La moto tiene que tener un cilindraje mayor a cero");
  }
    this->cilindraje= cilindraje;
 }

Moto:: ~Moto(){
  cout<<"destruyendo moto"<< this ->placa<<endl;
}


void Moto::setCilindraje(int cilindraje) { 
   if(cilindraje <0){
    throw("La moto tiene que tener un cilindraje mayor a cero");
  }
  this->cilindraje = cilindraje;
 }
int Moto::getCilindraje() const{
   return this->cilindraje; }


 void setAltocilindraje(int cilindraje){
  if(cilindraje > 400){
  cout<<("La moto es de alto cilindraje");
  }
}

  string Moto::getTipo() const{
    return "moto";
  }

  int Moto::cobrar() const{
    return 3000+100*1;
  }

  string Moto::resumen() const{
      return Vehiculo::resumen() + ", cilindraje: " + to_string(this->cilindraje);
  }

 