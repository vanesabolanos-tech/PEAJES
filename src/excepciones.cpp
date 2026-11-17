#include "excepciones.hpp"

using namespace std;

PlacaInvalidaException:: PlacaInvalidaException(string mensaje){
    this->mensaje=mensaje;
}

const char* PlacaInvalidaException:: what()const noexcept{
    return this->mensaje.c_str();
}

DatosInvalidosException::DatosInvalidosException(string mensaje){
    this->mensaje=mensaje;
}


const char* DatosInvalidosException::what()const noexcept{
    return this->mensaje.c_str();
}