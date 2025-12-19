#include <iostream>

#include "Circulo.h"
using namespace std;

// --------------------------------------------------

int puntosInteriores(const Circulo& c, Punto lista[], int n, Punto dentro[]) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (c.contiene(lista[i])) {
            dentro[contador] = lista[i];
            contador++;
        }
    }
    return contador; 
}

// --------------------------------------------------
int main() {
    
    Punto centro(0, 0);
    Circulo c(centro, 5);

    
    Punto puntos[3] = { Punto(1,2), Punto(4,4), Punto(6,0) };

    Punto dentro[3]; 
    int numDentro = puntosInteriores(c, puntos, 3, dentro);

    cout << "Puntos dentro del círculo:" << endl;
    for (int i = 0; i < numDentro; i++) {
        cout << "(" << dentro[i].getX() << ", " << dentro[i].getY() << ")" << endl;
    }

    return 0;
}
