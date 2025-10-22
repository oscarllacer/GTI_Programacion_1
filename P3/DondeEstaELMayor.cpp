//-------------------------------------------------------------------------------
// Autor: Oscar Llacer Cloquell
// Fecha: 02/10/2025
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//
// Lista<R>
// ->
// dondeEstaElMayor()
// ->
// Lista R, Mayor Valor
//
//-------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int dondeEstaElMayor(const double* lista, int longitud) {
    if (longitud == 0) {
        cout << "La lista está vacía. No se puede encontrar el mayor valor." << endl;
        return -1; 
    } 

    int posicionMayor = 0; 
    for (int i = 1; i < longitud; i++) {
        if (lista[i] > lista[posicionMayor]) {
            posicionMayor = i; 
        }
    }

    return posicionMayor;
}

int main() {
    
    const double listaNumeros[] = {5, 2, 9, 1, 6};
    int longitud = 5;

    int posicionDelMayor = dondeEstaElMayor(listaNumeros, longitud);
    //Prueba Auto:
    if (posicionDelMayor != -1) {
        cout << "El mayor valor se encuentra en la posición " << posicionDelMayor << " de la lista." << endl;
    }

    return 0;
}

