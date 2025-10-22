#include <iostream>
using namespace std;

// ------------------------------------------------
// Autor: Óscar llacer
// Fecha: 20-10-2025
// ------------------------------------------------

// ------------------------------------------------
// 
// lista: [N]
// n: N
// ->
// contiene()
// -> 
// V/F
// ------------------------------------------------

int contiene(int* puntero, int n){

    for (int i = 0; i < n; i++)
    {
        if (n == puntero[i])
        {
            return true;
        }
        
    }

    return false;
    
}

int main(){

    int lista[3] = {1,2,3};

    //prueba automatica
    if (contiene(& lista[0], 3) != true)
    {
        cout << "ha ocurrido un error";
    }
    
}




