#include <iostream>
#include "Punto.h"

// ---------------------------------------------------
// Punto Lista<Punto>
// -->
// camino()
// -->
// Real
// ---------------------------------------------------

double camino(Punto* puntero, int n){
    
    Punto p0;
    double camino = p0.distancia(puntero[0]);

 
    int j = 1;

    for (int i = 0; i < n-1; i++)
    {   
        camino = camino + puntero[i].distancia(puntero[j]);
        // std::cout << camino << std::endl;
        j++;
    }
    
    return camino;

}


// ---------------------------------------------------
// ---------------------------------------------------

int main() {

    Punto p0;
    Punto p1(3,4);
    Punto p2(6, 8);
    Punto p3(9, 12);



    Punto lista[3] = {p1,p2,p3};

    double res = camino(&lista[0], 3);

    if( res != p3.distancia(p0)){
        std::cout << "error";
    }

    return 0;

} // ()

// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------