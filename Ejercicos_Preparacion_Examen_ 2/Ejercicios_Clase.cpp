#include <iostream>
using namespace std;
#include "Punto.h"
#include "Circulo.h"

/* EJERCICIO 1: Dada una lista de círuclos, genera una lista que contenga solo los círculos cuya superficie ocupa más que un cuadrante

Lista<Circulo> -> varioscuadrantes()-> Lista<circulos>
ls= lista salida

*/
int VariosCuadrantes(Circulo* lc, int nc, Circulo * ls){

    int ns = 0; //Tamaño lista salida--la nombramos en el  main con el mismo tamaño de la lista de entrada
    double radio;
    Punto Centro;
    for(int i=0; i<nc; i++){
       radio = lc[i].getRadio(); //lo ponemos pq está declarado en privado, por eso ponemos el getRadio
       centro = lc[i].getCentro();
       if((centro.getX()-r < 0 && centro.getX()+r>0) || (centro.getY()-r<o && centro.getY()+r>0))
          
          ls[ns]=lc[i];
          ns++; //recorre todo los elementos y dice cual ocupa más de un cuadrante
    }
    return 0;
}