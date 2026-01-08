// archivo: ejercicio4_integral.cpp
#include <iostream>
#include <vector>
#include <cmath>
#include "Polinomio.h"

using namespace std;

double integralDefinida(const Polinomio &p, double a, double b) {
    int g = p.grado();
    // Calcular primitiva P(x) y evaluar en b y a sin construir explícitamente polinomio si se quiere:
    auto evalPrimitiva = [&](double x) {
        double s = 0.0;
        double pot = x; // x^(i+1) tracked multiplicatively no necesario; hacemos directo: s += c_i * x^(i+1)/(i+1)
        // calculamos x^k incrementalmente:
        double xpow = x; // x^1
        if (g >= 0) {
            // i = 0 term: c0 * x
            s += p.coeficientes(0) * x;
            for (int i = 1; i <= g; ++i) {
                // término i: c_i * x^(i+1) / (i+1)
                // actualizamos potencia x^(i+1)
                xpow *= x; // ahora xpow = x^(i+1) (since before was x^i)
                s += p.coeficientes(i) * xpow / (i + 1);
            }
        }
        return s;
    };

    return evalPrimitiva(b) - evalPrimitiva(a);
}

int main() {
    // p(x) = 2x  -> integral 0..1 = 1
    Polinomio p(vector<double>{0.0, 2.0}); // 0 + 2x
    double res = integralDefinida(p, 0.0, 1.0);
    if (fabs(res - 1.0) > EPS) fail("Integral definida incorrecta para p(x)=2x en [0,1]");

    // p(x) = 3 -> integral 2..5 = 3*(5-2) = 9
    Polinomio q(vector<double>{3.0}); // constante
    double res2 = integralDefinida(q, 2.0, 5.0);
    if (fabs(res2 - 9.0) > EPS) fail("Integral definida incorrecta para p(x)=3 en [2,5]");

    return 0;
}
