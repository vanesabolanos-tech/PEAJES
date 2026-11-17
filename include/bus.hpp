#pragma once
#include "vehiculo.hpp"

using namespace std;

class Bus : public Vehiculo{
private:
  int puestos;

public:
  Bus(string placa, int puestos);
  ~Bus() override;

  void setPuestos(int puestos);
  int getPuestos() const;

string getTipo()const override;
int cobrar() const override;
string resumen() const override;
};