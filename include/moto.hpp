#pragma once
#include "Vehiculo.hpp"
#include "propietario.hpp"
using namespace std;

class Moto: public Vehiculo{
private:
  int cilindraje;
  Propietario *p;
  //int altocilindraje;

public:
  Moto(string placa, int cilindraje, Propietario* p);
  ~Moto() override;

  void setCilindraje(int cilindraje);
  int getCilindraje()const;

  bool altocilidraje()const;

 string getTipo() const override;
 int cobrar () const override;
 string resumen() const override;
};