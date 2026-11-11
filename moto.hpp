#pragma once
#include "Vehiculo.hpp"
#include "Variante.hpp"
using namespace std;

class Moto: public Vehiculo{
private:
  int cilindraje;
  int altocilindraje;

public:
  Moto(string placa, int cilindraje);
  ~Moto() override;

  void setCilindraje(string cilindraje);
  string getCilindraje()const;

  void setAltocilindraje(string cilindraje )

 string getTipo() const override;
 int cobrar() const override;
 string resumen() const override;
};