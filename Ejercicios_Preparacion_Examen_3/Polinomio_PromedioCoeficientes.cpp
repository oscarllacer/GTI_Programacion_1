#include <iostream>
using namespace std;

/*FUNCION QUE CALCULE EL PROMEDIO DE LOS COEFICIENTES DE UN POLINOMIO:*/

double promedioCoeficientes(double coeficientes[], int n)
{
    double suma = 0.0;

    for (int i = 0; i < n; i++)
    {
        suma += coeficientes[i];
        
    }

    return suma / n;
}

int main()
{
    double polinomio[] = {3, -2, 5, 1}; 
    int n = 4;

    double promedio = promedioCoeficientes(polinomio, n);

    cout << "El promedio es: " << promedio;

    return 0;

   
}
