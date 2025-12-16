// Circulo.h

#ifndef CIRCULO_H

#define CIRCULO_H

#include "Punto.h"

class Circulo
{
private:
    Punto centro;
    double radio;

public:
    Circulo();
    Circulo(const Punto, const double);
    Punto getCentro() const;
    double getRadio() const;
    double getArea() const;
    double getPerimetro() const;
};

#endif