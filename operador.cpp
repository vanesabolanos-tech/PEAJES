#include <iostream>
#include "operador.hpp"
#include "excepciones.hpp"
#include "variante.hpp"

using namespace std;

Operador::Operador(string codempleado): Persona(nombre, documento){
  
  this->codempleado= codempleado;

}
Operador::~Operador(){
  cout <<"destruyendo operador"<< this->codempleado<<endl;
}

void Operador::setCodempleado(string codempleado) {
   this->codempleado= codempleado;
  } 

string Operador::getCodempleado() const {
   return this->codempleado;  
  }

string Operador::getTipo() const{
  return "Operador";
}


string Operador::resumen() const {
  return Operador::resumen() + ", su codigp de empleado es: " + this->codempleado;
}