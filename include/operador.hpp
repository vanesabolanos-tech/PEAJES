#pragma once
#include <string>
#include "persona.hpp"


using namespace std;

class Operador: public Persona
{
private:
string codempleado ;

public:
  Operador(string nombre, string documento, string codempleado);
  ~Operador() override;

  void setCodempleado(string codempleado);
  string getCodempleado() const;

 string getTipo()const override;
 string resumen() const override; 
  
};