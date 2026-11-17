#pragma once
#include <string> 
#include "vehiculo.hpp"

using namespace std;
class Camion : public Vehiculo{
private:
  int cantidadEjes;

public:
  Camion(string placa, int cantidadEjes);
  ~Camion()override;

  void setCantidadEjes(int cantidadEjes);
  int getCantidadEjes() const;

  string getTipo() const override;
  int cobrar() const override;
  string resumen() const override;

};