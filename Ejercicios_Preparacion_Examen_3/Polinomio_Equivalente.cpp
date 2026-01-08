
#include <iostream>
#include <vector>
#include <cmath>
#include "Polinomio.h"

using namespace std;

Polinomio normalizar(const Polinomio &p) {
    int g = p.grado();
    int ultimoNoCero = -1;
    for (int i = g; i >= 0; --i) {
        if (fabs(p.coeficientes(i)) > EPS) { ultimoNoCero = i; break; }
    }
    if (ultimoNoCero == -1) return Polinomio(vector<double>{0.0});
    vector<double> coefs(ultimoNoCero + 1, 0.0);
    for (int i = 0; i <= ultimoNoCero; ++i) coefs[i] = p.coeficientes(i);
    return Polinomio(coefs);
}

int main() {
    // {1,2,0,0} -> {1,2}
    Polinomio p(vector<double>{1.0, 2.0, 0.0, 0.0});
    Polinomio q = normalizar(p);
    if (q.grado() != 1) fail("Normalizar no recortó ceros finales correctamente");
    if (fabs(q.coeficientes(0) - 1.0) > EPS || fabs(q.coeficientes(1) - 2.0) > EPS)
        fail("Normalizar cambió coeficientes o los dejó mal");

    // todo cero -> grado 0 y coef 0
    Polinomio z(vector<double>{0.0, 0.0});
    Polinomio zn = normalizar(z);
    if (zn.grado() != 0 || fabs(zn.coeficientes(0) - 0.0) > EPS) fail("Normalizar no transformó polinomio cero correctamente");

    return 0;
}
