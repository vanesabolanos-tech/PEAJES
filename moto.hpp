#pragma once
#include "Vehiculo.hpp"
#include "Variante.hpp"
using namespace std;

class Moto: public Vehiculo{
private:
  int cilindraje;
  //int altocilindraje;

public:
  Moto(string placa, int cilindraje);
  ~Moto() override;

  void setCilindraje(int cilindraje);
  int getCilindraje()const;

  void setAltocilindraje(int cilindraje );

 string getTipo() const override;
 
 string resumen() const override;
};