#include "emergencia.hpp"
#include "vehiculo.hpp"
using namespace std;

class Emergencia::Emergencia(string unidad, string descripcion) {
this->unidad=unidad;
this->descripcion=descripcion;
}

Emergencia::~Emergencia(){
    cout<<"destruyendo emergencia"<<endl;
}