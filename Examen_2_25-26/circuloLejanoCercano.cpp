/* ============================================================
   EJERCICIO 4
   ------------------------------------------------------------
   Diseña una función que reciba una lista de círculos y un 
   punto p y devuelva el círculo más cercano y el más lejano a p.
   La distancia de un círculo a p es desde su circunferencia.
   Se garantiza que p no está dentro de ningún círculo.
   Implementa y escribe una prueba automática.
   ============================================================ 
    DISEÑO:

   Distancia desde punto p al círculo C:
       distancia = distancia_centros - radio
   donde distancia_centros es sqrt((x2-x1)^2 + (y2-y1)^2)

   Como no podemos usar <cmath>, hacemos nuestra propia raíz.
*/

#include <iostream>
#include "Punto.h"
#include "Circulo.h"
using namespace std;

//-------------------------------------------------------------------------//
// Punto,[Circulo]->F()->Circulo,Circulo
void circuloLejanoCercano(Punto p,Circulo * circulos,unsigned int cuantos,Circulo * circulosLejanoCercano){
    Punto inicial = circulos[0].getCentro();
    double distanciaLejano= inicial.distancia(p) - circulos[0].getRadio();
    Circulo lejano = circulos[0];
    double distanciaCercano= inicial.distancia(p) - circulos[0].getRadio();
    Circulo cercano = circulos[0];
    for (int i = 1; i <= cuantos - 1; i++){
        Punto comparar = circulos[i].getCentro();
        double distanciaComparar= inicial.distancia(p) - circulos[i].getRadio();
        if (distanciaCercano>distanciaComparar){
            distanciaCercano = distanciaComparar;
            cercano = circulos[i];
        }
        if (distanciaLejano<distanciaComparar){
            distanciaLejano = distanciaComparar;
            lejano = circulos[i];
        }
    }
}
// -------------------------------------------------------------------
// -------------------------------------------------------------------
int main(){
    Punto p1(2,3);
    
}
// -------------------------------------------------------------------