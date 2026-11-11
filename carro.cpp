#include <iostream>
#include "carro.h"

Carro::Carro()
{
  this->cantidadpasajeros = "";
 
}

Carro::Carro(int cantidadpasajeros)
{
  this->cantidadpasajeros= cantidadpasajeros;

}

void Carro::setCantidpasajeros(int cantidadpasajeros) { this->cantidadpasajeros= cantidadpasajeros; }

int Carro::getCantidadPasajeros) { return this->cantidadpasajeros; }

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