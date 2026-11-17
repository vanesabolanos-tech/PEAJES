#pragma once
#include <string>
#include <exception>

using namespace std;

class PlacaInvalidaException : public exception{
    private:
    string mensaje;
    public:
    PlacaInvalidaException(string mensaje);
    const char* what() const noexcept override;
};

class DatosInvalidosException : public exception{
    private: 
    string mensaje;
    public:
    DatosInvalidosException(string mensaje);
     const char* what() const noexcept override;
};

