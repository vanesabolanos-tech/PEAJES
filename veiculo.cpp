#include <iostream>
using namespace std;

// Clase base abstracta
class Poligono {
protected:
    int numLados; // Atributo protegido (#) en el diagrama UML

public:
    Poligono() : numLados(0) {}
    Poligono(int numLados) : numLados(numLados) {}
    virtual ~Poligono() {}

    void setNumLados(int numLados) { this->numLados = numLados; }
    int getNumLados() { return numLados; }

    // Método virtual puro: hace que la clase sea abstracta (= 0)
    virtual double calcularArea() = 0; 
};