#include "caseta.hpp"
#include <iostream>

using namespace std;

Caseta::Caseta(Operador* o){
    this->operador =o;
    this->dinero=0;
    this->carros=0;
    this->motos=0;
    this->buses=0;
    this->camiones=0;
}

Caseta::~Caseta(){
for (int i=0; i<registros.size();i++){
    delete registros[i];
}
cout << "destruyendo la caseta"<<endl;
}

void Caseta::regristrarvehiculo(Vehiculo* v){
    int pago=v->cobrar();

    string placa = v ->getPlaca();
    string tipo = v ->getTipo();

    Registro* newboleto = new Registro(placa, tipo,pago);

    this->registros.push_back(newboleto);
    this->dinero+=pago;

    if(tipo =="Carro"){
        this->carros;
    }else if(tipo =="Moto"){
        this->motos;
    }else if(tipo =="Bus"){
        this->buses;
    }else if(tipo =="Camion"){
        this->camiones;
    }
}

    int Caseta::getDinero()const {
        return this ->dinero;
    }

     int Caseta::getCarros()const {
        return this ->carros;
    }
     int Caseta::getMotos()const {
        return this ->motos;
    }
     int Caseta::getBuses()const {
        return this ->buses;
    }
     int Caseta::getCamiones()const {
        return this ->camiones;
    }


