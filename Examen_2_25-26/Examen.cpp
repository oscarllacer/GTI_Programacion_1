#include <iostream>
using namespace std;
/*
 EJERCICIO 1
   ------------------------------------------------------------
   Diseña una función que reciba tres puntos y devuelva en qué 
   cuadrante está su punto medio.
   Implementa la función en C++ y escribe una prueba automática.
 
   DISEÑO:

   p1,p2,p3 : Punto → cuadrante : int
   Se calcula el punto medio de los tres:
        mx = (p1.x + p2.x + p3.x) / 3
        my = (p1.y + p2.y + p3.y) / 3
   Cuadrantes:
        1: x>0,y>0
        2: x<0,y>0
        3: x<0,y<0
        4: x>0,y<0
   Si cae en un eje, devolvemos 0.

*/
int cuadrante_de_tres(Punto a, Punto b, Punto c) {
    double mx = (a.x + b.x + c.x) / 3.0;
    double my = (a.y + b.y + c.y) / 3.0;

    if (mx > 0 && my > 0) return 1;
    if (mx < 0 && my > 0) return 2;
    if (mx < 0 && my < 0) return 3;
    if (mx > 0 && my < 0) return 4;
    return 0;
}
main(){
    Punto p1{2, 5}, p2{4, 3}, p3{1, 2};   // punto medio claramente en cuadrante 1
    int q = cuadrante_de_tres(p1, p2, p3);

    cout << "Ej1 - Cuadrante: ";
    if (q == 1) cout << "OK (" << q << ")\n";
    else       cout << "ERROR (" << q << ")\n";
}

/* ============================================================
   EJERCICIO 2
   ------------------------------------------------------------
   Diseña una función que reciba una lista de números del 0 al 9 
   y devuelva otra lista con el número de repeticiones de cada 
   número. res[i] indica cuántas veces aparece i en la lista.
   Implementa la función y escribe una prueba automática.
   ============================================================ 
   DISEÑO:

   entrada: arr[], tamaño n
   salida: res[10] con las frecuencias de 0..9
   
*/
void contar_digitos(int arr[], int n, int res[]) {
    for (int i = 0; i < 10; i++)
        res[i] = 0;

    for (int i = 0; i < n; i++)
        res[arr[i]]++;
}
main() {
    int lista[12] = {0,1,2,2,3,3,3,4,9,9,9,9};
    int res[10];

    contar_digitos(lista, 12, res);

    cout << "Ej2 - Frecuencia del 3 debe ser 3: ";
    if (res[3] == 3) cout << "OK\n";
    else             cout << "ERROR (" << res[3] << ")\n";

    cout << "Ej2 - Frecuencia del 9 debe ser 4: ";
    if (res[9] == 4) cout << "OK\n";
    else             cout << "ERROR (" << res[9] << ")\n";
}


/* ============================================================
   EJERCICIO 3
   ------------------------------------------------------------
   Diseña una función que reciba una lista de puntos y devuelva 
   la esquina inferior izquierda y la esquina superior derecha 
   del menor rectángulo que contenga a todos los puntos.
   Implementa la función y escribe una prueba automática.
   ============================================================ 

 DISEÑO:
   entrada: puntos[], n
   salida: rectángulo dado por:
        esquina inf izq:  (minX, minY)
        esquina sup der:  (maxX, maxY)
*/

void rectangulo_minimo(Punto pts[], int n, Punto &inf_izq, Punto &sup_der) {
    double minX = pts[0].x;
    double minY = pts[0].y;
    double maxX = pts[0].x;
    double maxY = pts[0].y;

    for (int i = 1; i < n; i++) {
        if (pts[i].x < minX) minX = pts[i].x;
        if (pts[i].y < minY) minY = pts[i].y;
        if (pts[i].x > maxX) maxX = pts[i].x;
        if (pts[i].y > maxY) maxY = pts[i].y;
    }

    inf_izq = {minX, minY};
    sup_der = {maxX, maxY};
}

main(){
    Punto lista[4] = {{1,2}, {-3,5}, {0,-1}, {4,3}};
    Punto inf, sup;

    rectangulo_minimo(lista, 4, inf, sup);

    cout << "Ej3 - Esquina inferior izquierda (-3,-1)? ";
    if (inf.x == -3 && inf.y == -1) cout << "OK\n";
    else cout << "ERROR (" << inf.x << "," << inf.y << ")\n";

    cout << "Ej3 - Esquina superior derecha (4,5)? ";
    if (sup.x == 4 && sup.y == 5) cout << "OK\n";
    else cout << "ERROR (" << sup.x << "," << sup.y << ")\n";
}

/* ============================================================
   EJERCICIO 4
   ------------------------------------------------------------
   Diseña una función que reciba una lista de círculos y un 
   punto p y devuelva el círculo más cercano y el más lejano a p.
   La distancia de un círculo a p es desde su circunferencia.
   Se garantiza que p no está dentro de ningún círculo.
   Implementa y escribe una prueba automática.
   ============================================================ 
    DISEÑO:

   Distancia desde punto p al círculo C:
       distancia = distancia_centros - radio
   donde distancia_centros es sqrt((x2-x1)^2 + (y2-y1)^2)

   Como no podemos usar <cmath>, hacemos nuestra propia raíz.
*/


/* Método de Newton para raíz cuadrada */
double raiz(double x) {
    double r = x;
    for (int i = 0; i < 20; i++)
        r = 0.5 * (r + x / r);
    return r;
}

double distancia_punto(Punto a, Punto b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return raiz(dx*dx + dy*dy);
}

double distancia_circulo_punto(Circulo c, Punto p) {
    return distancia_punto(c.c, p) - c.r;
}

/* Devuelve referencias a los círculos más cercano y más lejano */
void mas_cercano_y_lejano(Circulo cs[], int n, Punto p,
                          Circulo &cerca, Circulo &lejos) {

    cerca = cs[0];
    lejos = cs[0];

    double d0 = distancia_circulo_punto(cs[0], p);
    double dc = d0, dl = d0;

    for (int i = 1; i < n; i++) {
        double d = distancia_circulo_punto(cs[i], p);

        if (d < dc) {
            dc = d;
            cerca = cs[i];
        }
        if (d > dl) {
            dl = d;
            lejos = cs[i];
        }
    }
}



main() {
    Punto p{0,0};

    Circulo lista[3] = {
        {{5,0}, 1},   // distancia centro=5 → distancia círculo=4
        {{10,0}, 2},  // distancia=8
        {{3,4}, 1}    // distancia=5-1=4
    };

    Circulo cmin, cmax;
    mas_cercano_y_lejano(lista, 3, p, cmin, cmax);

    cout << "Ej4 - El más cercano debe tener centro (5,0) o (3,4): ";
    if ( (cmin.c.x==5 && cmin.c.y==0) ||
         (cmin.c.x==3 && cmin.c.y==4) )
        cout << "OK\n";
    else
        cout << "ERROR\n";

    cout << "Ej4 - El más lejano debe ser (10,0): ";
    if (cmax.c.x == 10 && cmax.c.y == 0)
        cout << "OK\n";
    else
        cout << "ERROR\n";
}

