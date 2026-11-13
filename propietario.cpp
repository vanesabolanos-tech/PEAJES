#include <iostream>
#include "propietario.hpp"
#include "excepciones.hpp"
#include "variante.hpp"

using namespace std;

Propietario::Propietario(bool servecino): Persona(nombre, documento){
  
  this->servecino= servecino;

}
Propietario::~Propietario(){
  cout <<"destruyendo busss"<< this->nombre<<this->documento<<endl;
}

void Propietario::setServecino(bool vecino) {
   this->servecino= servecino;
  } 

bool Propietario::getServecino() const {
   return this->servecino;  
  }

string Propietario::getTipo() const{
  return "Propietario";
}


string Propietario::resumen() const {
  return Propietario::resumen() + ", si es vecino: " + to_string(this->servecino);
}