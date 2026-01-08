
#include <iostream>
#include <vector>
#include "Polinomio.h"
/*Un polinomio es alternante 
si los coeficientes no nulos alternan de signo (+, −, +, − o −, +, −, +).

Ejemplo:

{1, -2, 3, -4} → alternante
{1, 2, -3} → no alternante  */

bool esAlternante(const Polinomio &p)
{
    int signoAnterior = 0;

    for (int i = 0; i <= p.grado(); i++)
    {
        double c = p.coeficientes(i);
        if (c != 0.0)
        {
            int signoActual = (c > 0) ? 1 : -1;
            if (signoAnterior != 0 && signoActual == signoAnterior)
                return false;
            signoAnterior = signoActual;
        }
    }
    return true;
}


int main()
{
    Polinomio p1(vector<double>{1, -2, 3, -4});
    Polinomio p2(vector<double>{1, 2, -3});

    if (!esAlternante(p1))
        cout << "FALLO: deberia ser alternante\n";

    if (esAlternante(p2))
        cout << "FALLO: no deberia ser alternante\n";

    return 0;
}
