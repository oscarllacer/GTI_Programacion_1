#include <iostream>
#include <vector>
#include "Polinomio.h"

/*Un polinomio es dominante si el valor absoluto del coeficiente de
 mayor grado es estrictamente mayor 
que la suma de los valores absolutos del resto de coeficientes.*/

double absDouble(double x)//Funcion que calcula el valor absoluto de un numero
{
    if (x < 0) return -x;
    return x;
}

bool esDominante(const Polinomio &p)
{
    int g = p.grado();
    double dominante = absDouble(p.coeficientes(g));
    double suma = 0.0;

    for (int i = 0; i < g; i++)
        suma += absDouble(p.coeficientes(i));

    return dominante > suma;
}
int main()
{
    Polinomio p1(vector<double>{1, 1, 10});
    Polinomio p2(vector<double>{5, 3, 6});

    if (!esDominante(p1))
        cout << "FALLO: deberia ser dominante\n";

    if (esDominante(p2))
        cout << "FALLO: no deberia ser dominante\n";

    return 0;
}
