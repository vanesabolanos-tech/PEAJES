#include <iostream>
#include "moto.h"

Moto::Moto()
{
  this->cilindraje= "";
 
}

Moto::Moto(int cilindraje)
{
  this->cilindraje= cilindraje;

}

void Moto::setCilindraje(int cilindraje) { this->cilindraje = cilindraje; }

int Camion::getCilindraje() { return this->cilindraje; }

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
