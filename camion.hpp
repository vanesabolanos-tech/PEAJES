#pragma once
#include <string>
using namespace std;
class Camion : public Vehiculo{
private:
  int cantidadEjes;

public:
  Camion(string placa, int cantidadEjes);
  ~Camion()override;

  void setCantidadEjes(string cantidadEjes);
  string getCantidadEjes() const;

  string getTipo() const override;
  int cobrar() const override;
  string resumen() const override;

};