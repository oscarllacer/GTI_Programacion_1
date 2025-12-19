#include <iostream>

#include "Punto.h"

int puntInteriores(double radio, Punto p0, Punto *punt, Punto *res, int n){

    int j = 0;

    for(int i = 0; i < n; i++){
        if(punto[i].distancia(p0) <= radio){
            res[j]= punt[i];
            j++
        }

    }
    return j;
}

int main(){
    double radio = 2;
    Punto p0;
    Punto p1(1,1);
    Punto p2(1.5,2.5);
    Punto p3(0.4);

    Punto Lista[100] = {p1,p2,p3};
    Punto Res[100];

        Punto Esperado[2] = {p1,p2};

    int j = puntosInteriores(radio, p0, &Lista[0], &Res[0], 3); 

    
    for (int i = 0; i < j; i++)
    {
        if (Res[i].getX() != Esperado[i].getX())
        {
            std::cout << "error";

        }

    }


    return 0;


}