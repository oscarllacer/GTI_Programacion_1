#include <iostream>
#include <vector>
#include "Polinomio.h"

/*
Haz una funcion que reciba un vector/array de numeros enteros 

y lo ordene por la frecuencia de aparicion de sus elementos.

En caso de empate, los elementos deben mantenerse en orden ascendente

*/

//PASOS: 
/* 1-Contar cuantas veces aparece cada numero
   2-Colocarlos del que MAS SE REPITE al que MENOS
   3-Si 2 numeros se repiten lo mismo, el MAS PEQUEÑO VA PRIMERO <*/


vector<int> ordenarPorFrecuencia(vector<int> v) {
  int n = v.size();
  // contar frecuencias
  vector<int> freq(n);

  for (int i = 0; i < n; i = i + 1) {
    freq[i] = 0;
    for (int j = 0; j < n; j = j + 1) {
      if (v[i] == v[j]) {
        freq[i] = freq[i] + 1;
      }
    }
  }

  // ordenar por frecuencia (burbuja simple)
  for (int i = 0; i < n; i = i + 1) {
    for (int j = i + 1; j < n; j = j + 1) {

      if (freq[j] > freq[i] ||
         (freq[j] == freq[i] && v[j] < v[i])) {

        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;

        int auxf = freq[i];
        freq[i] = freq[j];
        freq[j] = auxf;
      }
    }
  }

  return v;
}
//main()
bool pruebaOrdenarPorFrecuencia() {

  vector<int> v = {4,6,2,4,3,2,2,6};
  vector<int> esperado = {2,2,2,4,4,6,6,3};

  vector<int> r = ordenarPorFrecuencia(v);

  for (int i = 0; i < r.size(); i = i + 1) {
    if (r[i] != esperado[i]) {
      cout << "Prueba ordenarPorFrecuencia: FALLA\n";
      return false;
    }
  }

  cout << "Prueba ordenarPorFrecuencia: OK\n";
  return true;
}
