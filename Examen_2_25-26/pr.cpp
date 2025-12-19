#include <iostream>
#include <cmath>

using namespace std;

struct Punto {
    double x, y;

    Punto(double x_=0, double y_=0) : x(x_), y(y_) {}

    double distancia(const Punto &p) const {
        double dx = x - p.x;
        double dy = y - p.y;
        return sqrt(dx*dx + dy*dy);
    }
};

struct Circulo {
    Punto centro;
    double radio;

    Circulo(Punto c = Punto(), double r = 0.0) : centro(c), radio(r) {}

    Punto getCentro() const { return centro; }
    double getRadio() const { return radio; }
};

/*
   Devuelve en 'cerca' el círculo más cercano a p
   y en 'lejos' el más lejano a p.
   Distancia = distancia del centro a p menos el radio.
*/
void mas_cercano_y_lejano(Circulo cs[], int n, Punto p,
                          Circulo &cerca, Circulo &lejos) {

    // Inicialización con el primer círculo
    double dist_min = cs[0].getCentro().distancia(p) - cs[0].getRadio();
    double dist_max = dist_min;

    cerca = cs[0];
    lejos = cs[0];

    for (int i = 1; i < n; i++) {
        double dist_act =
            cs[i].getCentro().distancia(p) - cs[i].getRadio();

        if (dist_act < dist_min) {
            dist_min = dist_act;
            cerca = cs[i];
        }

        if (dist_act > dist_max) {
            dist_max = dist_act;
            lejos = cs[i];
        }
    }
}

/* -------- PRUEBA AUTOMÁTICA -------- */
bool prueba() {
    Punto p(3, 0);

    Circulo lista[3] = {
        Circulo(Punto(0, 0), 1),   // dist = 2
        Circulo(Punto(5, 0), 1),   // dist = 1  -> más cercano
        Circulo(Punto(10, 0), 2)   // dist = 5  -> más lejano
    };

    Circulo cmin, cmax;
    mas_cercano_y_lejano(lista, 3, p, cmin, cmax);

    double dmin = cmin.getCentro().distancia(p) - cmin.getRadio();
    double dmax = cmax.getCentro().distancia(p) - cmax.getRadio();

    return (fabs(dmin - 1.0) < 1e-6) && (fabs(dmax - 5.0) < 1e-6);
}

int main() {
    if (prueba())
        cout << "Prueba automática: OK\n";
    else
        cout << "Prueba automática: ERROR\n";

    return 0;
}
