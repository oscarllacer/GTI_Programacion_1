/*Recibe un array de números naturales y su tamaño.
Devuelve un array de 2 posiciones:

[0] → suma de pares

[1] → suma de impares
*/

void sumarParesImpares(const int lista[], int n, int resultado[2]) {
    resultado[0] = 0; // suma pares
    resultado[1] = 0; // suma impares
    for (int i = 0; i < n; i++) {
        if (lista[i] % 2 == 0) resultado[0] += lista[i];
        else resultado[1] += lista[i];
    }
}

// Prueba automática
void test_sumarParesImpares() {
    int numeros[] = {1, 2, 3, 4, 5};
    int res[2];
    sumarParesImpares(numeros, 5, res);
    if (res[0] == 6 && res[1] == 9)
        cout << "OK: sumarParesImpares()\n";
    else
        cout << "ERROR: sumarParesImpares()\n";
}
