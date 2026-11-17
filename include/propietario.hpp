#pragma once
#include <string>
#include "persona.hpp"

using namespace std;

class Propietario: public Persona
{
private:
bool servecino;

public:
   Propietario(string nombre, string documento,bool servecino);
  ~Propietario() override;

  void setServecino(bool servecino);
  bool getServecino() const;

 string getTipo()const override;
 string resumen() const override; 
  
};