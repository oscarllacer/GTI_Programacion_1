#include <iostream>
#include <vector>
#include "Polinomio.h"

/* Diseñar una función
 que divida todos los coeficientes del polinomio por el máximo factor común entero (en valor absoluto).
  
Ejemplo:
{6, -12, 18} → {1, -2, 3}  */

int absInt(int x)
{
    if (x < 0) return -x;
    return x;
}

int mcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Polinomio factorComunMaximo(const Polinomio &p)
{
    int g = p.grado();
    int factor = 0;

    for (int i = 0; i <= g; i++)
    {
        int c = (int)p.coeficientes(i);
        if (c != 0)
        {
            if (factor == 0)
                factor = absInt(c);
            else
                factor = mcd(factor, absInt(c));
        }
    }

    if (factor == 0)
        return p;

    vector<double> nuevos(g + 1);
    for (int i = 0; i <= g; i++)
        nuevos[i] = p.coeficientes(i) / factor;

    return Polinomio(nuevos);
}

int main()
{
    Polinomio p(vector<double>{6, -12, 18});
    Polinomio r = factorComunMaximo(p);

    if (r.coeficientes(0) != 1 || r.coeficientes(1) != -2 || r.coeficientes(2) != 3)
        cout << "FALLO: factor comun incorrecto\n";

    return 0;
}
