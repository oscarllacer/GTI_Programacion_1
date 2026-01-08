#include <iostream>

/*Diseñar una función que indique si p(n) es divisible por un entero k.*/

bool divisibleEn(const Polinomio &p, int n, int k)
{
    int valor = evaluarEntero(p, n);
    return valor % k == 0;
}

int main()
{
    // p(x) = x^2 - 1 -> p(3) = 8
    Polinomio p(vector<double>{-1, 0, 1});

    if (!divisibleEn(p, 3, 4))
        cout << "FALLO: 8 deberia ser divisible por 4\n";

    return 0;
}

