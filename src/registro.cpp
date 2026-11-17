#include "registro.hpp"
#include <iostream>

using namespace std;

Registro::Registro(string placa,string tipo, int valcobrado){
    this->placa=placa;
    this->tipo=tipo;
    this->valcobrado=valcobrado;
}

Registro::~Registro(){
    cout<<"destruyendo registro"<<this->placa<<endl;
}

string Registro::getPlaca(){
    return this->placa;
}

int Registro::getValcobrado(){
    return this->valcobrado;
}