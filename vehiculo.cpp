#include <iostream>
#include "vehiculo.hpp"
#include "excepciones.hpp"
using namespace std;

Vehiculo::Vehiculo(string placa){
    if(placa.length()<4){
        throw PlacaInvalidaException ("las placas no pueden tener menos de cuatro caracteres");
    }
    else{
        this->placa= placa;
    }
}
Vehiculo::~Vehiculo(){
    cout<<"destruyendo vehiculo"<<this->getPlaca()<<endl;
}

string Vehiculo::resumen()const{
    return this->getTipo()+""+this->getPlaca();
}

ostream &operator<<(ostream &os, const Vehiculo &vehicilo){
    os<<vehicilo.resumen();
    return os;
}