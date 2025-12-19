// ---------------------------------------------------
//
// Ciruclo.cpp
//
// g++ -c Punto.cpp 
//
// ---------------------------------------------------

#include "Circulo.h"
#include <cmath>
using namespace std;


Circulo::Circulo() : centro(Punto(0,0)), radio(1.0) {}

Circulo::Circulo(const Punto& c, double r) : centro(c), radio(r) {}


Punto Circulo::getCentro() const { return centro; }
double Circulo::getRadio() const { return radio; }

bool Circulo::contiene(const Punto& p) const {
    double distancia = centro.distancia(p);
  return distancia <= radio;
}


