/* ============================================================
   EJERCICIO 3
   ------------------------------------------------------------
   Diseña una función que reciba una lista de puntos y devuelva 
   la esquina inferior izquierda y la esquina superior derecha 
   del menor rectángulo que contenga a todos los puntos.
   Implementa la función y escribe una prueba automática.
   ============================================================ 

 DISEÑO:
   entrada: puntos[], n
   salida: rectángulo dado por:
        esquina inf izq:  (minX, minY)
        esquina sup der:  (maxX, maxY)
*/
#include <iostream>
using namespace std;
#include "Punto.h"
//-------------------------------------------------------------------------//
// [Puntos]->F()->Punto Punto
void puntosRectangulo(Punto * puntos,unsigned int cuantos,Punto * puntosRectangulo){
    double mayorX = puntos[0].getX();
    double menorX = puntos[0].getX();
    double mayorY = puntos[0].getY();
    double menorY = puntos[0].getY();
    for (int i = 0; i < cuantos; i++){
        double compararX = puntos[i].getX();
        double compararY = puntos[i].getY();
        if (compararX > mayorX){
            mayorX= compararX;
        }
        if (compararX < menorX){
            menorX= compararX;
        }
        if (compararY > mayorY){
            mayorY= compararX;
        }
        if (compararY < menorY){
            mayorX= compararX;
        }
    }
    puntosRectangulo[0] = Punto(menorX,menorY); //Punto esquina inferior izquierda
    puntosRectangulo[1] = Punto(mayorX,mayorY); //Punto esquina superior derecha
}
// -------------------------------------------------------------------
// -------------------------------------------------------------------
int main(){
    Punto p1(1,2);
    Punto p2(2,3);
    Punto p3(3,4);
    Punto p4(5,6);
    Punto puntos[]{p1,p2,p3,p4};
    Punto puntosFinales[2];
    puntosRectangulo(&puntos[0],4,&puntosFinales[0]);
    if(puntosFinales[0].getX()!= 1 && puntosFinales[0].getY()!= 2){
        cout<<"va mal";
    }else{
        cout<<"va bien";
    }
}
// -------------------------------------------------------------------