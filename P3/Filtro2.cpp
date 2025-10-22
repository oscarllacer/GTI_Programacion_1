#include <iostream>
using namespace std;

// -------------------------------------------------
// Autor: Óscar Llacer 
// Fecha: 09/10/2025
// -------------------------------------------------

// -------------------------------------------------
// 
// lista: [R]
// 
// ->
// filtrar()
// -> 
//
// lista: [R]
// -------------------------------------------------

double* filtrar ( double* p1, double* pr, int n){

    int a = 0;
    int b = 0;

    for ( int i = 0; i < n; i++)
    {
        if (p1[i] > 0)
        {
            pr[j] = p1[i];  
            j++;
        }
    
    }

    return pr;   
}

// -------------------------------------------------
// -------------------------------------------------

int main(){

    double lista[100] = {-2, -8, -12, 2, 24, 33};
 
    double rlista[100];

    int n = 6; 

    double* resultadofiltrar = filtrar(& lista[0], & rlista[0], n);

    for (int i = 0; i < 3; i++)
    {
        cout << resultadofiltrar[i] << " ";
    }
    

    return 0;
}