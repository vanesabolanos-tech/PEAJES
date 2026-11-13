#include <iostream>
#include "persona.hpp"
#include "excepciones.hpp"

using namespace std;

Persona::Persona(string nombre, string documento){
if(nombre.empty()||documento.empty()){
throw DatosInvalidosException("El nombre y el documento de la persona no pueden estar vacios");
}
    this->nombre=nombre;
    this->documento=documento;
}

Persona::~Persona(){
    cout<< "destruyendo persona" <<this-> getNombre()<<this->getDocumento()<<endl;

}

string Persona::getNombre()const {
    return this->nombre;
}

string Persona::getDocumento()const {
    return this->documento;
}


string Persona::resumen() const {
  return this->getTipo() + " " + this->getNombre() + " " + this->getDocumento();
}

ostream &operator<<(ostream &os, const Persona &persona){
  os << persona.resumen();
  return os;
}