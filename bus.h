#pragma once
#include <string>
using namespace std;
class Bus
{
private:
  int puestos;

public:
  Bus();
  Bus(int puestos);

  void setPuestos(string puestos);

  string getPuestos();

  void print();
};