/* Diseña una función que, a partir de:

una lista de números reales

un número entero t ≥ 1 devuelva una nueva lista, donde cada casilla contiene la media de t elementos consecutivos de la lista original: 

resultado[i]=media(l[i],l[i+1],...,l[i+t−1]) 

El tamaño de la lista resultado será lista.size() - t + 1.

EJEMPLO:
lista = [1, 3, 2, 9]
t = 2

SALIDA:

[ (1+3)/2 , (3+2)/2 , (2+9)/2 ] → [2, 2.5, 5.5]

*/
#include <vector>

double mediaListaPorciones(const std::vector<double>& lista, unsigned int p,unsigned int j)
{
    double suma = 0.0;
    for (unsigned int i = p; i <= j; i++) {
        suma += lista[i];
    }
    return suma / (j - p + 1);
}

std::vector<double> listaMedias(const std::vector<double>& lista, unsigned int t)
{
    std::vector<double> resultado;

    for (unsigned int i = 0; i <= lista.size() - t; i++) {
        resultado.push_back(mediaListaPorciones(lista, i, i + t - 1));
    }

    return resultado;
}
