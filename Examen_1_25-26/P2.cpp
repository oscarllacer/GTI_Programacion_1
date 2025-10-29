//La función cuenta cuántos divisores tiene un número natural n.
//Debe usar la función esDivisor() del ejercicio anterior.

int contarDivisores(int n) {
    if (n <= 0) return 0;
    int contador = 0;
    for (int i = 1; i <= n; i++) {
        if (esDivisor(i, n)) contador++;
    }
    return contador;
}

// Prueba automática
void test_contarDivisores() {
    if (contarDivisores(6) == 4 && contarDivisores(7) == 2)
        cout << "OK: contarDivisores()\n";
    else
        cout << "ERROR: contarDivisores()\n";
}
