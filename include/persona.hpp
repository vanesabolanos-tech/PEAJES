#pragma once
#include <string>
#include <iostream>

using namespace std;

class Persona{
    protected:
    string nombre;
    string documento;

    public:
    Persona(string nombre, string documento);
    virtual ~Persona();

    string getNombre()const;
    string getDocumento()const;
    virtual string resumen() const;

    virtual string getTipo() const = 0;

};
ostream &operator<<(ostream &os, const Persona &persona);