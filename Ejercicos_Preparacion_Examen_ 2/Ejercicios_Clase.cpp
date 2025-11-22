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
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------

/*EJERCICIO 2: Dada una lista de puntos y otra de circulos, determina que circulos tiene mas puntos 

lista<Circulos> , lista<Puntos> --> masPuntos() --> Circulo

*/
Circulo masPuntos(Circulo* lc, int nc, Puntos* lp, int np){
    Punto Centro;
    double radio;
    
    int contadores[nc]={}; //creo un contador con el numero que haya de circulos y lo declaramos en un principio como todo a cero {}

    int max=0;

    Circulo cmax;

    for(int i = 0; i<nc, i++){//Recorre la lista de circulos
        centro = lc[i].getCentro();//el lc[i] es un circulo y con el getCentro saco el centro
        radio = lc[i].getRadio();

        for(int j=0; i<jnp, j++){//Recorre lista de puntos
            if(lp[j].distancia(centro) < radio){
                contadores[i]++;
            }

        }
        if(contadores[i] > max){
            max = contadores[i];
            cmax = lc[i];
        }

    }
    if(max==0) return Circulo(); //Si un circulo no tiene puntos devolvemos un circulo vacio
    else
       return cmax;
}
