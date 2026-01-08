#include "Circulo.h"
#include <cmath>
using namespace std;

/*Haz una funcion que calcule el area del circulo cuyo diametro esta definido por los puntos, P1(1,1) y P2(3,2). 
Haz una P.A
*/
const double PI = 3.14159265358979323846;


double areaCirculoPorDiametro(const Punto &p1, const Punto &p2) {
double distancia = p1.distancia(p2);
double radio = distancia / 2.0;
// opcional: construir un Circulo
Circulo c(Punto((p1.getX()+p2.getX())/2.0, (p1.getY()+p2.getY())/2.0), radio);
(void)c; // no usado directamente
return PI * radio * radio;
}


bool pruebaAreaCirculo() {
Punto p1(1.0, 1.0);
Punto p2(3.0, 2.0);
double area = areaCirculoPorDiametro(p1, p2);
// calculo manual: distancia = sqrt( (2)^2 + (1)^2 ) = sqrt(5)
// radio = sqrt(5)/2 => area = PI * (5/4) = 1.25 * PI
double esperado = 1.25 * PI;
double eps = 1e-9;
if ( (area + eps) >= esperado && (area - eps) <= esperado ) {
std::cout << "Prueba 3 (areaCirculo): OK\n";
return true;
} else {
std::cout << "Prueba 3 (areaCirculo): FALLA - se obtuvo " << area << " pero se esperaba " << esperado << "\n";
return false;
}
}