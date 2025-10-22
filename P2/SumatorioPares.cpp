#include <iostream> 
using namespace std;

// ------------------------------------------------
// Autor: Óscar Llacer 
// Fecha: 01/10/2025
// ------------------------------------------------

// ------------------------------------------------
// 
// <n:N>
// ->
// conCondicion()
// -> 
// <N>
// ------------------------------------------------

int conCondicion(int n){

    int res = 0;

    for(int i=0; i<=n; i++){

        if(i % 2 == 0){

            res = res + i;
        }
        
    }

    return res;
}

// ------------------------------------------------
// 
// <n:N>
// ->
// sinCondicion()
// -> 
// <N>
// ------------------------------------------------

int sinCondicion(int n){

    int res = 0;

    for (int i=2;i<=8;i =i + 2){

        res = res + i;
    }

    return res;
}

// ------------------------------------------------
// 
// <n:N>
// ->
// conFormula()
// -> 
// <N>
// ------------------------------------------------

int conFormula(int n){

    int res;
    
    res = ((n/2) * ((n/2) + 1));

    return res;
}

main(){

    int n = 8;

    if(conCondicion(n) != 20){
        cout << "ha ocurrido un error";
    }

    if(sinCondicion(n) != 20){
    cout << "ha ocurrido un error";
    }

    if(conFormula(n) != 20){
    cout << "ha ocurrido un error";
    }

    return 0; 
}