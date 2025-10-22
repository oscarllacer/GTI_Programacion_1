#include <iostream>
using namespace std;

//EJERCICIO 1:

double potencia(double a, unsigned int n){
    double res;

    if(n==0){
        res = 1;
    }
    if(n<0){
        res = 1;//empezamos a contar des de 1
        for(int i=1; i<=-n; i++){
            res = res * a ;
        }
        res = 1 / res;

    }
    else{
       res=1;
       for(int i=1; i<n;i++){
        res = res *
       }  

    }
    return res;
}

//Ejercicio 2

float polinomio(float a, float *as, unsigned int *es, unsigned int n){//int n es el tamaño  del array
     
    float res=0; //variable para ir acumulando el resultado
    for(int i=0; i<n; i++){ //si quiero poner n-1 tendria que poner i<= n-1
        res = res + as[i] * potencia(a, es[i]);//Al poner la i estamos generalizando toda la funcion ya que el bucle for recorre toda la suma
    }
}

//Ejercicio 3:

int sumaPotencias(int a, int *pot, int *A, unsigned int n){
     
    int  res = 0; //inicializamos el resultado
    for(int k=0; k<n; k++){
        res = res + potencia(a, pot[k]) + A[k];   
    }
    return res;

}

int main(){  //PRUEBA AUTO

if(potencia(2,3)!=8) cout <<"Test 1 incorrecto"<<endl;
if(potencia(3,3)!=27) cout <<"Test 2 incorrecto"<<endl;


//Ejercicio 2:  se pone lo de &as[] pq es un puntero (array)
unsigned int n=4;
float as[n]={3,8,-5,1};
unsigned int [n]= {4,3,1,2};

if  (polinomio(1,&as[0], &es[0],n)!=17)cout <<"Test 3 incorrecta"<<endl;

//Ejercicio 3
unsigned int n=3;

int pot[n]={2,3,1};
int a[n]={1,2,0};
int a=2;

if (sumaPotencias(a, &pot[0], &A[0], n)!=14) cout <<"Test 4 incorrecto"<<endl;

return 0;

}
//---------------------------------
//EJERCICIO 2 EXAMEN: , llamamos a la funcion anterior:Potencia--funcion polinomio 
//EL CODIGO ESTÁ METIDO DENTRO DEL CODIGO ANTERIOR CON EL EJERCICIO 1 


//EJERICICIO 3: SUMA POTENCIA

