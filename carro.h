#pragma once
#include <string>
using namespace std;
class Carro
{
private:
  int cantidadpasajeros ;

public:
  Carro();
  Carro(int cantidadpasajeros);

  void setCantidpasajeros(string cantidadpasajeros);

  string getCantidadpasajeros();

  void print();
};