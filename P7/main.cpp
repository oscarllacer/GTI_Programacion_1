#include <iostream>
#include "Polinomio.h"

using namespace std;

int main() {

    // --------------------------------------------------
    // Crear polinomios
    // --------------------------------------------------

    Polinomio p1("1 3 0 5");     // p1(x) = 1 + 3x + 5x^3
    Polinomio p2("2 1");         // p2(x) = 2 + x

    cout << "Polinomio p1: " << p1.aTexto() << endl;
    cout << "Polinomio p2: " << p2.aTexto() << endl;

    // --------------------------------------------------
    // Grado
    // --------------------------------------------------

    cout << "Grado de p1: " << p1.grado() << endl;
    cout << "Grado de p2: " << p2.grado() << endl;

    // --------------------------------------------------
    // Coeficientes
    // --------------------------------------------------

    cout << "Coeficiente de x^1 en p1: " << p1.coeficiente(1) << endl;
    cout << "Coeficiente de x^3 en p1: " << p1.coeficiente(3) << endl;

    // --------------------------------------------------
    // Evaluación
    // --------------------------------------------------

    double x = 2.0;
    cout << "p1(" << x << ") = " << p1.valor(x) << endl;
    cout << "p2(" << x << ") = " << p2.valor(x) << endl;

    // --------------------------------------------------
    // Multiplicación por escalar
    // --------------------------------------------------

    Polinomio p3 = p1.multiplicar(2.0);
    cout << "p1 * 2 = " << p3.aTexto() << endl;

    // --------------------------------------------------
    // Suma de polinomios
    // --------------------------------------------------

    Polinomio p4 = p1.sumar(p2);
    cout << "p1 + p2 = " << p4.aTexto() << endl;

    return 0;
}
