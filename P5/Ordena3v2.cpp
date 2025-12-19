#include <iostream>


void Ordena3v2(int* p, int n){

    int temp;

    for (int i = 0; i < n; i++)//No es necesario hacer el bucle
    {
        for (int k = 0; k < n-1; k++)
        {
            if (p[k] > p[k+1])
            {
                temp = p[k];
                p[k] = p[k+1];
                p[k+1] = temp;
            }
        }
                
    }
    
}


int main(){


    int lista[3] = {5,3,2};
    int res[3] = {2,3,5};


    Ordena3v2(&lista[0], 3);

    for (int i = 0; i < 3; i++)
    {
        if(lista[i] != res[i])
        std::cout <<"error";

    }
    

    return 0;
}