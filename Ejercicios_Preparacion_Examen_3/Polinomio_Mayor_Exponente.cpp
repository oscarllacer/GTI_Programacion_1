#include <iostream>
#include "Polinomio.h"
using namespace std;

/*FUNCION QUE CALCULE CUAL ES EL VALOR DEL POLINOMIO CON MAYOR COEFICIENTE*/

double maxCoeficiente(double p[], int grado)
{
    double max = p[0];

    for (int i = 1; i <= grado; i++)
    {
        double valor = p[i];
        if (valor < 0)
            valor = -valor;

        double maxAbs = max;
        if (maxAbs < 0)
            maxAbs = -maxAbs;

        if (valor > maxAbs)
            max = p[i];
    }

    return max;
}

//PA:

int main()
{
    // p(x) = -2 + 5x - 10x^2
    double p[] = {-2, 5, -10};

    if (maxCoeficiente(p, 2) != -10)
        cout << "FALLO\n";
    else
        cout << "OK\n";

    return 0;
}
