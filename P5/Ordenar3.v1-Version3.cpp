#include <iostream>

//los 3 num enteros NO estan guardados en un array
//por eso, usaremmos las referencias (no se hace una copia de esa variable si no que la modificamos dentro de la funcion)

void OrdenaV1(int &a, int &b, int &c){
    int aux;

    if(b<a){
        aux = a; //esto es para no perder la variable a 
        a=b;
        b=aux;
    }

    if(c<a){//porque el tercero tiene que ser mayor  que el primero
        aux=a;
        a=c;
        c=aux;
    }

    if(c<b){//seria incorrecto pq c  tiene que ser > b
        aux =b;
        a=c;
        c=aux;

    }
    //NO devolvemos nada porque se modifica directamente en el main
    //son variables que se modifican en main

}

OrdenaV1(1,2,3);

int a=5, b=2, c=3;

OrdenaV1(a,b,b);


//EJERCICIO ORDENAR VERSION 2 SIN BUCLES:
/*
   Punto, Radio(R), ListaPuntos -->  PuntosInteriores()---> Lista<Puntos>
    
   El Punto, Radio sería un: Circulo,Lista<Punto>
   
*/

/*  DISEÑO CLASE CIRCULO:



*/
