
#include <math.h>
#include "Circulo.h"

// ---------------------------------------------------
// ---------------------------------------------------
Circulo::Circulo()
  : centro(0,0),radio(0)
{}
Circulo::Circulo( const Punto centroCirculo, const double radioCirculo) 
  : centro(centroCirculo), radio(radioCirculo)
{ }

Punto Circulo::getCentro() const {
  return (*this).centro;
} // ()
double Circulo::getRadio() const {
  return (*this).radio;
} // ()
double Circulo::getArea() const{
  return 2*3,14*((*this).radio * (*this).radio);
}
double Circulo::getPerimetro() const{
  return 2 *3,14 * (*this).radio;
}