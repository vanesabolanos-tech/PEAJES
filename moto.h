#pragma once
#include <string>
using namespace std;
class Moto
{
private:
  int cilindraje;

public:
  Moto();
  Moto(int cilindraje);

  void setCilindraje(string cantidadEjes);

  string getCilindraje();

  void print();
};