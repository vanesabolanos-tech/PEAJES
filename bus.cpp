#include <iostream>
#include "bus.h"

Bus::Bus()
{
  this->puestos= "";
 
}

Bus::Bus(int puestos)
{
  this->puestos= puestos;

}

void Moto::setPuestos(int puestos) { this->puestos= puestos; }

int Camion::getPuestos() { return this->puestos; }

/*void Camion::print()
{
  cout << "Informacion del autor" << endl;
  cout << "Nombre: " << this->nombre << endl;
  cout << "Nacionalidad: " << this->nacionalidad << endl;
  cout << "Fecha de nacimiento: " << this->fechaNacimiento << endl;
  if (this->fechaMuerte.length() > 0)
  {
    cout << "Fecha de muerte: " << this->fechaMuerte << endl;
  }
  cout << "Libros publicados: " << this->librosPublicados << endl;
}*/