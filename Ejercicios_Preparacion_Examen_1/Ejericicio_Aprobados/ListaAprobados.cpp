
//1-Diseña una funcion llamada numAprobados que reciba una lista de notas y diga cuantos alumnos aprobados hay



//-------------------------------------------------
#include <iostream>
using namespace std;

unsigned int numAprobados(float *notas, unsigned int cuantas){
    unsigned int num;
    num=0;

    for(int i=0; i<=cuantas-1; i++){
        if(notas[i]>=5) num = num + 1;
    }
    return num;
}

int main(){

    float notas[5]={1, 4, 7, 3, 10};

    unsigned res= numAprobados(&notas[0], 5); //Esto y el float anterior son la llamada a la funcion

    //Test automatico:
    if(res==2) cout<<"Funcion correcta" << endl;


    return 0;

}

//-----------------------------------
//EJERCICIO 2:2-Diseña una funcion llamada aprobados() que reciba una lista de notas y devuelva una lista de booleanos que nos digan si están aprobados o no

void aprobados(float *notas, unsigned int cuantos, bool * lista){
    
    for(int i=0; i<cuantos; i++){
        if(notas[i]>5) lista[i]=true;
        else lista[i]=false; //con esto modificamos la lista por eso no tengo que hacer un return para devolver algo
    }


}
int main(){

    //test:
    
    bool lista[5]={1, 4, 7, 3, 10};

    aprobados(&notas[0], 5, &lista[0]); //llamada a la funcion
    if(lista[1]==false) cout<<"Funcion 2 correcta"<<endl;
    if(lista[2]==true)cout<<"Funcion 2 correcta"<<endl; //endl es para que haga un salto de linea

    return 0;
}