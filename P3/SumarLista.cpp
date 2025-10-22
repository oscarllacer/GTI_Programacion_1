#include <iostream>
using namespace std;

// ------------------------------------------------
// Autor: Óscar Llacer
// Fecha: 01/10/2025
// ------------------------------------------------

// ------------------------------------------------
// 
// lista: [N]
// ->
// sumarLista()
// -> 
// <N>
// ------------------------------------------------

int sumarLista(int lista[], int cuantos) {
    int suma = 0;

    for(int i = 0; i < cuantos; i++) {
        suma += lista[i];
    }

    return suma;
}

int main() {

    int lista[5] = {1, 2, 3, 4, 5};

    cout << "La suma de la lista es: " << sumarLista(lista, 5) << std::endl;

    return 0;
}








