#include <iostream>
#include "Polinomio.h"

/*Diseña un metodo para la clase Polinomio llamado desviacionMedia que reciba una lista de 
Puntos que devuelva la media de (y-p(x)) para todos los puntos

Esto permite saber si en promedio los puntos están
por encima o por debajo de la curva */

//CON VECTOR:

double Polinomio ::desviacionMedia(const vector<Punto> &listaPuntos) const{
   
    if(lista.empty()) return -1; //si la lista esta vacia volvemos -1 para que nos de error, el empty es de vector

    double suma = 0;
    
   // for(int i = 0; i < listaPuntos.size(); i++)

    for(Punto p:listaPuntos){//para cada punto p de la lista Puntos
        suma = suma + (p.getY() - valor(p.getX()));
    }
    return suma / listaPuntos.size(); //dividimos la suma entre el tamaño de la lista
}