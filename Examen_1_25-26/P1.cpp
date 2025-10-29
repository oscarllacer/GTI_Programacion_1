//La función recibe dos enteros positivos a y b. 
//Devuelve true si uno divide exactamente al otro.

#include <iostream>
using namespace std;

bool esDivisor(int a, int b) {
    if (a <= 0 || b <= 0) return false; // naturales
    return (a % b == 0) || (b % a == 0);
}

// Prueba automática
void test_esDivisor() {
    if (esDivisor(3, 9) && esDivisor(9, 3) && !esDivisor(5, 7))
        cout << "OK: esDivisor()\n";
    else
        cout << "ERROR: esDivisor()\n";
}
