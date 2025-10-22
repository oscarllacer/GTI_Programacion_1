/*
1-Diseña, implementa y haz una prueba automatica de una funcion que reciba dos arrays de numeros reales
de distintos tamaños y diga si tienen algun elemento en comun 

Diseño:

main --> llama a --> comun() --> B
            l1<R>-->
            l2<R>-->


*/
#include <iostream>
using namespace std;

bool comun(float * a, float * b, int nA, int nB){

  for( int i = 0; i<nA; i++){ //BUCLES ANIDADOS: UNO DENTRO DE OTRO
    
    for(int j = 0; j<nB; j++){
        
        if(a[i] = b[j])
            
            return true;   
        
    }

  }
  return false;

}

int main(){ //PRUEBA AUTOMATICA:

    float a[5]={1.0, 2.0, 3.3, 4.4,5.5};

    float b[3]={1.1,2.4,3.6};

    if(comun(&a[0], &b[0], 5, 3)   == true) cout<<"Va mal"<< endl; //EL & SE PONE PARA DECIRLE A LA FUNCION LA DIRECCION DE MEMORIA
    
    //Ahora cammbiamos la posicion 3 en un 2.0 para que haya dos iguales y lo comparamos

    b[2]=2.0;

    if(comun(&a[0], &b[0], 5, 3) == false ) cout<<"Va mal"<< endl;
    
    

    return 0;

}


/*
2-Diseña , implementa una prueba automatica de una funcion que determine si los últimos k elementos del array b son todos mayores que los
primeros k elementos del array A

DISEÑO:

l1<Z>
l2<z> ---> mayores()---> B
k:Z

*/

bool mayores(int * A, int * B, int nA, int nB, int K){ //la K son cuantos valores queremos comparar
    
    if( k> nA || k> nB) return false;

    bool res = true;

    for(int i=0; i < k; i++){
        for (int j=nB-K; j<nB; j++){

        ///for (int j=nB-1; j>nb-k;j--)
       
        if(B[j] < A[i]) res = false; 
       
        }
        return res;
        
    }


}

int main(){

    int a[5]={1, 2, 3, 4,5};

    int b[3]={1,2,3};

    if(mayores(&a[0], &b[0], 5, 3, 2)   == true) cout<<"Va mal"<< endl; //EL 2 ES LA K 
    
    return 0;
}


//EJERCICIO 3, FOTO , ponemos un void porque el array no devuelve otro array, el return será  un void (no devuelve nada)

void serie(int *A, int *B, int n, int k, int * C){

    C[0] = A[0]+B[0];
    C[1] = A[1] + B[1];
    for(int i= 2; i<k; i++){
        C[i] = C[i-1]+ (A [i-1]*B[i-2]);
    }
}

int main(){

    int A[5]={1,2,3,4,5};
    int B[5] = {5,4,3,2,1};

    int k = 5;
    int C[k];

    serie(&A[0], &B[0], 5, k, &C[0]);

    if(C[4] != 40 ) cout <<"Test ha fallado"<< endl;
    return 0;
}