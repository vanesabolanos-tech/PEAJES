#pragma once
#include "vehiculo.hpp"
#include "variante.hpp"

using namespace std;


class Carro : public vehiculo
{
private:
  int cantidadpasajeros ;

public:
  Carro(string placa, int cantidadpasajeros);
  ~Carro() override;

  void setCantidpasajeros(string cantidadpasajeros);
  int getCantidadpasajeros() const;

 string getTipo()const override;
 int cobrar () const override;
 string resumen() const override;
};