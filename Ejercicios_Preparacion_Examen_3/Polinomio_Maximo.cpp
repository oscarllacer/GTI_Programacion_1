#include <iostream>
#include "Polinomio.h"


/*Añade un metodo maximo(a,b) a la clase Polinomio
que devuelva el máximo valor del polinomio en el intervalo [a,b],
evalunadolo cada 0.1*/

double  Polinomio :: maximo(const double a, const double b) const{
    double max=-1;

    for(double i= a; i<=b; i=i+0.1){
        if(valor(i) > max){//No  ponemos el  p.valor porque SI ESTAMOS EN LA CLASE POLINOMIO
            max = valor(i); 
        }
    }
    return maximo;
}