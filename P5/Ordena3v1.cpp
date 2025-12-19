#include <iostream>

// ---------------------------------------------------
// lista<Punto>
// ->
//   Ordena3v1()
// ->
// lista<Punto>
// ---------------------------------------------------

void Ordena3v1(int* p, int n){

    int j = 1;
    int temp;

    for (int i = 0; i < n-1; i++)
    {
        if (p[i] > p[j])
        {
            temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }

        j++;
        
    }
    
}


int main(){


    int lista[3] = {3,2,5};
    int res[3] = {2,3,5};


    Ordena3v1(&lista[0], 3);

    for (int i = 0; i < 3; i++)
    {
        if(lista[i] != res[i])
        std::cout <<"error";
    }
    

    return 0;
}