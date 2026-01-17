
/*Diseña una función que, a partir de:

una lista de números reales

dos posiciones p y j

devuelva la media aritmética de los elementos comprendidos entre las posiciones p y j (ambas incluidas).

Notas:

Las posiciones p y j pueden venir en cualquier orden.

Si p > j, se intercambian.

EJEMPLO:

lista = [1, 4, 9, 8, 10, 4]
p = 1
j = 4

CALCULO:

(4 + 9 + 8 + 10) / 4 = 7.75

*/

#include <vector>

double mediaListaPorciones(const std::vector<double>& lista, unsigned int p, unsigned int j)
{
    unsigned int inicio;
    unsigned int final;

    // Aseguramos el orden
    if (p < j) {
        p = inicio;
        j = final;
    } else {
        p = inicio;
        j = final;
    }

    double suma = 0.0;
    unsigned int contador = 0;

    for (unsigned int i = inicio; i <= final; i++) {
        suma = suma + lista[i];
        contador++;
    }

    return suma / contador;
}
