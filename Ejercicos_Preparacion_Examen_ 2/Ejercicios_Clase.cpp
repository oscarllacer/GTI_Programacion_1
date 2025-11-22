#include <iostream>
using namespace std;
#include "Punto.h"
#include "Circulo.h"

/* EJERCICIO 1: Dada una lista de círuclos, genera una lista que contenga solo los círculos cuya superficie ocupa más que un cuadrante

Lista<Circulo> -> varioscuadrantes()-> Lista<circulos>
ls= lista salida

*/
int VariosCuadrantes(Circulo* lc, int nc, Circulo * ls){

    int ns = 0; //Tamaño lista salida--la nombramos en el  main con el mismo tamaño de la lista de entrada
    double radio;
    Punto Centro;
    for(int i=0; i<nc; i++){
       radio = lc[i].getRadio(); //lo ponemos pq está declarado en privado, por eso ponemos el getRadio
       centro = lc[i].getCentro();
       if((centro.getX()-r < 0 && centro.getX()+r>0) || (centro.getY()-r<o && centro.getY()+r>0))
          
          ls[ns]=lc[i];
          ns++; //recorre todo los elementos y dice cual ocupa más de un cuadrante
    }
    return 0;
}
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------

/*EJERCICIO 2: Dada una lista de puntos y otra de circulos, determina que circulos tiene mas puntos 

lista<Circulos> , lista<Puntos> --> masPuntos() --> Circulo

*/
Circulo masPuntos(Circulo* lc, int nc, Puntos* lp, int np){
    Punto Centro;
    double radio;
    
    int contadores[nc]={}; //creo un contador con el numero que haya de circulos y lo declaramos en un principio como todo a cero {}

    int max=0;

    Circulo cmax;

    for(int i = 0; i<nc, i++){//Recorre la lista de circulos
        centro = lc[i].getCentro();//el lc[i] es un circulo y con el getCentro saco el centro
        radio = lc[i].getRadio();

        for(int j=0; i<jnp, j++){//Recorre lista de puntos
            if(lp[j].distancia(centro) < radio){
                contadores[i]++;
            }

        }
        if(contadores[i] > max){
            max = contadores[i];
            cmax = lc[i];
        }

    }
    if(max==0) return Circulo(); //Si un circulo no tiene puntos devolvemos un circulo vacio
    else
       return cmax;
}

//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------

/*EJERCICIO 3: Funcion que generenlos primeros n términos de la sucesión:
   A0 = 1, A1= 1, AN= AN-1 + 2 AN -2              

   EJEMPLO: 
   A2 = 1 + 2*1 = 3
   A3 = 3 +2*1 = 5
*/

void GenerarSucesion(int a[], int n){
    if(n>0)
    a[0] = 1;

    if(n>1)
    a[1] = 1;

    for(int i=2; i<n; i++){
        a[i]=a[i-1]+2*a[i-2];
    } 
}

//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------
/*EJERCICIO 4: Dado un array A, calcula para cada elemento i la suma de todos los elementos que le siguen*/

void SumasPosteriores(int A[], int n, int s[]){
    for(int i=0; i<n; i++){
        int suma = 0;
        for(int j = i+1; J<n; J++){
            suma + = A[J];
        }
        S[i] = suma;
    }
}

main(){
    int A[4]={1,2,3,4};
    int S[4];
    
    SumasPosteriores(A, 4, S);

    if(S[0] != 9 || S[1] != 7 || S[2]!=4 || S[3]!= 0){
        cout <<"Va mal"<<endl;
    }
    return 0;
}
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------

/*
EJERCICIO 5: Funcion que compruebe si dos circulos son tangentes

Dos Circulos son tangentes exteriores si la distancia entre sus centros es igual a la suma de los radios

Dos Circulos son tangentes interiores si la distancia entre sus centros es igual a la diferencia de sus  radios

*/

int SonTangentes(int x1, int y, int r1,  int x2, int y2, int r2){
    int dx = x2 - x1 , dy = y2 - y1;
    int d2 = dx * dx + dy * dy;

    int suma = r1 + r2;
    int dif = r1 - r1;
    
    if(dif < 0) dif = - dif; //Valor Absoluto

    return (d2 == suma*suma || d2 == dif*dif);

}
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------

/*EJERCICIO 6: Funcion que ordende de mayor a menor unn arreglo formado por circulos según su tamaño*/

void OrdenarCirculos(int r[], int n){
    int i, J, maxIndex, tmp;
    for(i=o; i<n-1; i++){
        maxIndex = i;
        for (J = i+1; J<n; J++){
            if(r[J] > r[maxIndex]){
                maxIndex = J;
            }
        }
        tmp = r[i];
        r[i] = r[maxIndex];
        r[maxIndex] = tmp;
    }
}