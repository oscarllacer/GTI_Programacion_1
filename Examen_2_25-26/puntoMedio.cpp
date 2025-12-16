 /* EJERCICIO 1
   ------------------------------------------------------------
   Diseña una función que reciba tres puntos y devuelva en qué 
   cuadrante está su punto medio.
   Implementa la función en C++ y escribe una prueba automática.
 
   DISEÑO:

   p1,p2,p3 : Punto → cuadrante : int
   Se calcula el punto medio de los tres:
        mx = (p1.x + p2.x + p3.x) / 3
        my = (p1.y + p2.y + p3.y) / 3
   Cuadrantes:
        1: x>0,y>0
        2: x<0,y>0
        3: x<0,y<0
        4: x>0,y<0
   Si cae en un eje, devolvemos 0.

*/
#include <iostream>
#include "Punto.h"
using namespace std;

// Punto->F()->N
unsigned int queCuadrante(Punto & p){
    double x = p.getX();
    double y = p.getY();
    unsigned int cuadrante;
    if (x == 0 && y == 0){
        cuadrante = 0;
    }
    if (x > 0 && y > 0){
        cuadrante = 1;
    }
    if (x < 0 && y > 0){
        cuadrante = 2;
    }
    if (x < 0 && y < 0){
        cuadrante = 3;
    }
    if (x > 0 && y < 0){
        cuadrante = 4;
    }
    return cuadrante;
}
//-------------------------------------------------------------------------//
// Punto,Punto,Punto->F()->N
unsigned int puntoMedio(Punto p1,Punto p2,Punto p3){
    Punto medio = p1.suma(p2);
    medio = medio.suma(p3);
    Punto final(medio.getX()/3,medio.getY()/3);
    return queCuadrante(final);
    }
// -------------------------------------------------------------------
    