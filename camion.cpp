#include <iostream>
#include "camion.h"

Camion::Camion()
{
  this->cantidadEjes = "";
 
}

Camion::Camion(int cantidadEjes)
{
  this->cantidadEeje= cantidadEjes;

}

void Camion::setCantidadEjes(int cantidadEjes) { this->cantidadEjes = cantidadEjes; }

int Camion::getCantidadEjes() { return this->cantidadEjes; }

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
