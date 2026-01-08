#include "Circulo.h"
using namespace std;

 /*¿UN PUNTO ESTÁ DENTRO DE VARIOS CÍRCULOS?*/

 //Con VECTORES:

 int cuantosContienen(const vector<Circulo>& v, const Punto& p) {

    int contador = 0;

    for (int i = 0; i < v.size(); i = i + 1) {
        if (v[i].contiene(p)) {
            contador = contador + 1;
        }
    }

    return contador;
}
bool pruebaTocan() {

    vector<Circulo> v;
    v.push_back(Circulo(Punto(0,0), 5));
    v.push_back(Circulo(Punto(0,0), 1));

    Punto p(5,0);

    vector<Circulo> r = circulosQueTocan(v, p);

    if (r.size() == 1 && r[0].getRadio() == 5) {
        cout << "Prueba circulos 3: OK\n";
        return true;
    } else {
        cout << "Prueba circulos 3: FALLA\n";
        return false;
    }
}
//----------------------------------------------
//----------------------------------------------
//         SIN VECTORES:
//----------------------------------------------
//----------------------------------------------
int cuantosContienen(Circulo v[], int n, Punto p) {

    int contador = 0;

    for (int i = 0; i < n; i = i + 1) {
        if (v[i].contiene(p)) {
            contador = contador + 1;
        }
    }

    return contador;
}
bool pruebaCuantosContienen() {

    Circulo v[3];
    v[0] = Circulo(Punto(0,0), 5);
    v[1] = Circulo(Punto(0,0), 2);
    v[2] = Circulo(Punto(10,10), 1);

    Punto p(1,1);

    int r = cuantosContienen(v, 3, p);

    if (r == 2) {
        cout << "Prueba circulos 1: OK\n";
        return true;
    } else {
        cout << "Prueba circulos 1: FALLA\n";
        return false;
    }
}
