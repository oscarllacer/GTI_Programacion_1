#include <iostream>
using namespace std;

// ------------------------------------------------
// Autor: Óscar LLacer
// Fecha: 9/10/2025
// ------------------------------------------------

// ------------------------------------------------
// 
// lista: [R]
// 
// ->
// filtrar()
// -> 
//
// lista: [R]
// ------------------------------------------------

double* filtrar(double* puntero, int n, int & pn){

    int newn = 0;

    for (int i = 0; i < n; i++)
    {
        if (puntero[i] > 0)
        {
            newn = newn + 1 ;
        }
        
    }

    double* nLista = new double[newn];

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if(puntero[i] > 0){

            nLista[j] = puntero[i];

            j++;
        }
    }

    pn = newn;

    return nLista;
       
}

// -------------------------------------------------
// -------------------------------------------------


int main(){

    double lista[4] = {-2,-1,1,2};
    int n = 4;
    int newn = 0;
    double esperado[2] = {1, 2};
    
    double* nuevaLista = filtrar(&lista[0], n, newn);

    //prueba automatica
    for (int i = 0; i < newn; i++)
    {
        if( nuevaLista[i] != esperado[i]){
            cout << "ha ocurrido un error";
        }
    }
    
    delete[] nuevaLista;

    return 0;
}