#include <iostream>
#include <vector>
#include "Polinomio.h"

/*Calcular cuántas veces el polinomio es divisible por x.*/

int multiplicidadCero(const Polinomio &p)
{
    int k = 0;

    while (k <= p.grado() && p.coeficientes(k) == 0.0)
        k++;

    return k;
}
int main()
{
    // p(x) = x^3
    Polinomio p(vector<double>{0, 0, 0, 1});

    if (multiplicidadCero(p) != 3)
        cout << "FALLO: multiplicidad incorrecta\n";

    return 0;
}
