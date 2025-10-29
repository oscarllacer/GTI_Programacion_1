/*
Genera los primeros n términos de la sucesión:
l[0] = a  
l[i] = sum_{k=0}^{i-1} (l[k] * b)
*/
void generarSucesion(int a, int b, int n, int resultado[]) {
    if (n <= 0) return;
    resultado[0] = a;
    for (int i = 1; i < n; i++) {
        int suma = 0;
        for (int k = 0; k < i; k++) {
            suma += resultado[k] * b;
        }
        resultado[i] = suma;
    }
}

// Prueba automática
void test_generarSucesion() {
    int res[5];
    generarSucesion(2, 3, 5, res);
    int esperado[] = {2, 6, 24, 90, 336};
    bool ok = true;
    for (int i = 0; i < 5; i++) if (res[i] != esperado[i]) ok = false;
    if (ok) cout << "OK: generarSucesion()\n";
    else cout << "ERROR: generarSucesion()\n";
}
