
#include <iostream>
#include <vector>

#include "Polinomio.h"

/*Un polinomio es palíndromo si sus coeficientes 
se leen igual de izquierda a derecha que de derecha a izquierda.*/

bool esPalindromo(const Polinomio &p)
{
    int i = 0;
    int j = p.grado();

    while (i < j)
    {
        if (p.coeficientes(i) != p.coeficientes(j))
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    Polinomio p1(vector<double>{1, 2, 3, 2, 1});
    Polinomio p2(vector<double>{1, 0, 2});

    if (!esPalindromo(p1))
        cout << "FALLO: deberia ser palindromo\n";

    if (esPalindromo(p2))
        cout << "FALLO: no deberia ser palindromo\n";

    return 0;
}
