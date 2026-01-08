#include <iostream>

/*ORDENAR UN ARRAY DE MENOR A MAYOR 
lista={3-4-2-1}                          */
void Ordenar(int* p, int n){

    int temp;

    for (int i = 0; i < n; i++)
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
    Ordenar(&lista[0], 3);
    return 0;
}