#pragma once
#include "vehiculo.hpp"
#include "variante.hpp"
#include "propietario.hpp"

using namespace std;


class Carro : public Vehiculo
{
private:
  int cantidadpasajeros ;
  Propietario *p;

public:
  Carro(string placa, int cantidadpasajeros, Propietario* p);
  ~Carro() override;

  void setCantidadpasajeros(int cantidadpasajeros);
  int getCantidadpasajeros() const;

 string getTipo()const override;
 int cobrar () const override;
 string resumen() const override;
};