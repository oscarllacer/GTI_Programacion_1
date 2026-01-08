//------------------
//
//   Circulo.h
//
//--------------------
#ifndef CIRCULO_YA_INCLUIDO
#define CIRCULO_YA_INCLUIDO

#include <iostream>
#include "Punto.h"

class Circulo {
 private:
  Punto centro;
  double radio;

 public:
  
  Circulo();
  
  Circulo(const Punto&, double);

  Punto getCentro() const;
  double getRadio() const;

  bool contiene(const Punto&) const;
};

#endif
