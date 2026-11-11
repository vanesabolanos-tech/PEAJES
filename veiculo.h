#include <iostream>
using namespace std;

// Clase base abstracta
class Veiculo {
protected:
    string placa : 0; // Atributo protegido (#) en el diagrama UML

public:
    Veiculo() : placa(0) {}
    <Veiculo(int placa) : placa(placa) {}
    virtual ~Veiculo() {}

    void setPlaca(int placa) { this->placa = placa; }
    int getPlaca() { return placa; }

    // Método virtual puro: hace que la clase sea abstracta (= 0)
    virtual string agregarPlaca() = 0; 
};