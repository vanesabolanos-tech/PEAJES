#include <iostream>
#include <vector>
#include "carro.hpp"
#include "Excepciones.hpp"
#include "moto.hpp"
#include "propietario.hpp"
#include "operador.hpp"
#include "caseta.hpp"
#include "bus.hpp"
#include "camion.hpp"


using namespace std;
int main(){
    vector<Vehiculo*>vehiculos;
    vector<Propietario*>propietarios;
//crear una ambulancia, cobran en emergencia y sin emergencia y destruyen(delete)
    try{
        Operador* o =new Operador("Isabel","656","empl1");
        Caseta* caseta=new Caseta(o);

        Propietario* pvec = new Propietario("131230","Marlon",true);
        Propietario* pnovec = new Propietario("151515","Alegandro",false);

        propietarios.push_back(pvec);
        propietarios.push_back(pnovec);

        //caso 1
        cout<<"primero"<<endl;
        Carro*c1 =new Carro("ABC123",3,pnovec);
        vehiculos.push_back(c1);
        caseta->regristrarvehiculo(c1);
        cout<<*c1<<endl;

                //caso 2
        cout<<"segundo"<<endl;
        c1->setPropietario(pvec);
        caseta->regristrarvehiculo(c1);
        cout<<*c1<<endl;

        //caso 3
        cout<<"tercero"<<endl;
        Moto* m1 =new Moto("XYZ45A",125,pvec);
        vehiculos.push_back(m1);
        caseta->regristrarvehiculo(m1);
        cout<<*m1<<endl;

        //caso 4 
        cout<<"cuarto"<<endl;
        Moto* m2= new Moto("MOT650",650,nullptr);
        vehiculos.push_back(m2);
        caseta->regristrarvehiculo(m2);
        cout<<*m2<<endl;
        if(m2->altocilidraje()){
            cout<<"es de alto cilindraje:si"<<endl;
        } else {
            cout<<"es de aly¿to cilindraje;no"<<endl;
        }

        //caso 5
        cout<<"quinto"<<endl;
        Bus* b1= new Bus("BUS777",38);
        vehiculos.push_back(b1);
        caseta->regristrarvehiculo(b1);
        cout<< *b1 <<endl;

        //caso 6
        cout<<"sexto"<<endl;
        Camion* cam1= new Camion("CAM301",3);
        vehiculos.push_back(cam1);
        caseta->regristrarvehiculo(cam1);
        cout<<*cam1<<endl;

        //caso 7
        cout<<"septimo"<<endl;
        cam1->setCantidadEjes(4);
        caseta->regristrarvehiculo(cam1);
         cout<<*cam1<<endl;

        //caso 8
        cout<<"octavo"<<endl;
        try{
            Carro* carroError= new Carro("",3,pnovec);
            delete carroError;
        }catch(const exception& e){
            cout<<"excepcion atrapada: "<<e.what()<<endl;
        }

        //caso 9
        cout<<"noveno"<<endl;
        try{
            Camion* camError= new Camion("CAMERROR",1);
            delete camError;
        }catch(const exception& e){
            cout<<"excepcion atrapada: "<<e.what()<<endl;
        }
        //caso 10
        cout<<"decimo"<<endl;
        cout<<"dinero total recaudado: "<<caseta->getDinero()<<endl;
        cout<<" total carros: "<<caseta->getCarros()<<endl;
        cout<<" total motos: "<<caseta->getMotos()<<endl;
        cout<<" total buses: "<<caseta->getBuses()<<endl;
        cout<<" total camiones: "<<caseta->getCamiones()<<endl;

        //caso 11
        cout<<"once"<<endl;
        int dineroDeclarado =caseta->getDinero();
        cout<<"el ooperador declara: "<<dineroDeclarado<<endl;

        if(dineroDeclarado == caseta->getDinero()){
            cout<<"la caja cuadra perfectamente"<<endl;
        } else{
            cout<<"la caja no cuadra"<<endl;
        }

        //caso 12
        cout<<"doce" <<endl;
        int dineroFalso = caseta->getDinero() - 1000;
        cout << "El operador declara: $" << dineroFalso << endl;

        if (dineroFalso != caseta->getDinero()) {
         cout << "-> ¡Alerta! La caja NO cuadra. Faltan $1000." << endl;
        } else {
        cout << "-> La caja cuadra." << endl;
        }

        //caso 13 
        cout<<"trece"<<endl;
        for(int i=0; i< vehiculos.size(); i++){
            delete vehiculos[i];
        }
        delete caseta;

        delete pvec;
        delete pnovec;
        delete o;

    
    }catch (const exception& e){
        cout<<"error."<<e.what()<<endl;
    }
return 0;
}
