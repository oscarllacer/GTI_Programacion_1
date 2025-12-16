/* ============================================================
   EJERCICIO 2
   ------------------------------------------------------------
   Diseña una función que reciba una lista de números del 0 al 9 
   y devuelva otra lista con el número de repeticiones de cada 
   número. res[i] indica cuántas veces aparece i en la lista.
   Implementa la función y escribe una prueba automática.
   ============================================================ 
   DISEÑO:

   entrada: arr[], tamaño n
   salida: res[10] con las frecuencias de 0..9
   
*/
// -------------------------------------------------------------------
// -------------------------------------------------------------------

#include <iostream>
using namespace std;

//-------------------------------------------------------------------------//
// [N]->F()->[N]
void repeticionesLista(unsigned int * lEntrada,unsigned int cuantos,unsigned int * lSalida){
    for (int j = 0; j <= 9 ; j++){
        for (int i = 0; i <= cuantos -1 ; i++){
            if (lEntrada[i]==j){
                lSalida[j]=lSalida[j+1];
            }
        }
    }
}
int main(){
    unsigned int listaEntrada[]{2,3,4};
    unsigned int listaVacia[10]{};
    repeticionesLista(&listaEntrada[0],3,&listaVacia[0]);
    if (listaVacia[0]!= 0){
        cout<<"va mal";
    }
}
// -------------------------------------------------------------------
// -------------------------------------------------------------------
// 