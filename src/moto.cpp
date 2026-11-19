#include <iostream>
#include "moto.hpp"
#include "excepciones.hpp"
#include "vehiculo.hpp"

using namespace std;

Moto::Moto(string placa, int cilindraje, Propietario* p):Vehiculo(placa){
  if(cilindraje < 0){
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


 bool Moto::altocilidraje()const{
  return this->cilindraje >400;
}

  string Moto::getTipo() const{
    return "Moto";
  }

  int Moto::cobrar() const{
       if(this->p !=nullptr){
      if(this ->p->getServecino()){
        int descuentoc=30+5;
        return ((3000+100*1)*(100-descuentoc))/100;
      }
    }
    return 3000+100*1;
  }

  string Moto::resumen() const{
      return Vehiculo::resumen() + ", cilindraje: " + to_string(this->cilindraje);
  }

 