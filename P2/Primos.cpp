#include <iostream>
using namespace name std;

// ------------------------------------------------
// Autor: Óscar Llacer
// Fecha: 01/10/2025
// ------------------------------------------------

// ------------------------------------------------
// 
// <N>
// ->
// esPrimo()
// -> 
// <V/F>
// ------------------------------------------------
  bool esPrimo(int n){

    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

main(){

    if(esPrimo(25) != false){
    cout << "ha ocurrido un error";
    }

    return 0;
}