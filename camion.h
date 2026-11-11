#pragma once
#include <string>
using namespace std;
class Camion
{
private:
  int cantidadEjes;

public:
  Camion();
  Camion(int cantidadEjes);

  void setCantidadEjes(string cantidadEjes);

  string getCantidadEjes();

  void print();
};