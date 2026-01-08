// archivo: ejercicio2_multiplicar.cpp
#include <iostream>
#include <vector>
#include <cmath>
#include "Polinomio.h"


Polinomio multiplicar(const Polinomio &a, const Polinomio &b) {
    int ga = a.grado();
    int gb = b.grado();
    int gR = ga + gb;
    vector<double> coefs(gR + 1, 0.0);
    for (int i = 0; i <= ga; ++i)
        for (int j = 0; j <= gb; ++j)
            coefs[i + j] += a.coeficientes(i) * b.coeficientes(j);
    return Polinomio(coefs);
}

int main() {
    // (1 + x) * (1 - x) = 1 - x^2
    Polinomio A(vector<double>{1.0, 1.0});
    Polinomio B(vector<double>{1.0, -1.0});
    Polinomio esperado(vector<double>{1.0, 0.0, -1.0});

    Polinomio R = multiplicar(A, B);
    assertPolinomioEqual(R, esperado, EPS, "Multiplicacion incorrecta para (1+x)*(1-x)");

    return 0;
}
