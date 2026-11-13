#pragma once 
#include <string>
#include <iostream>

using namespace std;

class Registro{
    private:
    string placa;
    string tipo;
    int valcobrado;

    public:
    Registro(string placa, string tipo, int valcobrado);
    ~Registro();

    string getPlaca();
    int getValcobrado();
};