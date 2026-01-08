#include <iostream>
using namespace std;

/* FUNCION QUE CAMBIE LOS SIGNOS A LOS COEFICIENTES DE UN POLINOMIO

Ejemplo: 

P(x)= +1 - 2X + 3X^2 ----> -1 + 2X - 3X^2                */


void cambiarSigno(double p[], int grado)
{
    for (int i = 0; i <= grado; i++)
        p[i] = -p[i];
}

//PA:

int main()
{
    // p(x) = 1 - 2x + 3x^2
    double p[] = {1, -2, 3};

    cambiarSigno(p, 2);

    if (p[0] != -1 || p[1] != 2 || p[2] != -3)
        cout << "FALLO\n";
    else
        cout << "OK\n";

    return 0;
}