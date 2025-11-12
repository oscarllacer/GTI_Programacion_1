#include <iostream>      
using namespace std;

//-------------------------------------------------------------------------------------
// FUNCION FILTRAR: devuelve dos listas, una de números pares y otra de números impares
//-------------------------------------------------------------------------------------
void filtrar(int lista[], int tam, int pares[], int &tamP, int impares[], int &tamI) {
    tamP = 0;             
    tamI = 0;             

    for (int i = 0; i < tam; i++) {      
        if (lista[i] % 2 == 0) {         
            pares[tamP] = lista[i];      
            tamP++;                      
        } else {                         
            impares[tamI] = lista[i];    
            tamI++;                      
        }
    }
}

//--------------------------------------------------------------------------------------------------------------------------
// FUNCION SUMAR LISTAS: devuelve la suma de las dos listas por separado y las mete en las 2 primeras casillas de una lista
//--------------------------------------------------------------------------------------------------------------------------
void sumarListas(int pares[], int tamP, int impares[], int tamI, int resultado[2]) {
    int sumaP = 0;        
    int sumaI = 0;        

    for (int i = 0; i < tamP; i++) {     
        sumaP += pares[i];               
    }

    for (int j = 0; j < tamI; j++) {     /
        sumaI += impares[j];            
    }

    resultado[0] = sumaP;               
    resultado[1] = sumaI;      
}

//---------------------------------------------------------
// PRUEBA AUTOMÁTICA:
//---------------------------------------------------------
int main() {
    int lista[5] = {1, 2, 3, 4, 5};   
    int pares[5];                
    int impares[5];                   
    int tamP, tamI;             
    int resultado[2];                 

 
    filtrar(lista, 5, pares, tamP, impares, tamI);

    sumarListas(pares, tamP, impares, tamI, resultado);

    if (resultado[0] == 6 && resultado[1] == 9) {        
        cout << "Prueba correcta. Programa OK." << endl;  
    } else {
        cout << "Error. Resultado incorrecto." << endl;   
    }

    return 0;   
}
