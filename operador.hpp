#pragma once
#include <string>
#include "bus.hpp"
#include "camion.hpp"
#include "carro.hpp"
#include "moto.hpp"
#include "persona.hpp"
#include "caseta.hpp"

using namespace std;

class Operador: public Persona
{
private:
string codempleado ;

public:
  Operador(string codempleado);
  ~Operador() override;

  void setCodempleado(string codempleado);
  string getCodempleado() const;

 string getTipo()const override;
 string resumen() const override; 
  
};