#include <iostream>
#include "Punto.h"

// ---------------------------------------------------
// Punto Lista<Punto>
// -->
// cercano()
// -->
// Punto 
// ---------------------------------------------------

Punto cercano(Punto* puntero, int n){
    
    Punto p0;
    double origen = puntero[0].distancia(p0);
    Punto cercano = puntero[0];

    for (int i = 1; i < n; i++)
    {
        if(puntero[i].distancia(p0) < origen){
            origen = puntero[i].distancia(p0);
            cercano = puntero[i];
        }
    }
    
    return cercano;

}


// ---------------------------------------------------
// ---------------------------------------------------

int main() {

    Punto p1(1,2);
    Punto p2(2, 4);
    Punto p3(-2, -3);

    Punto p0;

    Punto lista[3] = {p1,p2,p3};

    Punto res = cercano(&lista[0], 3);

    if( res.getX() != p1.getX() && res.getY() != p1.getY()){
        std::cout << "error";
    }


    return 0;

} // ()

// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------