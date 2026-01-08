#include <iostream>
using namespace std;

/*Diseña una funcion que se llame primeraRepetida que reciba un 
texto como array de caracteres terminada en 0 (null char)
y devuelva el numero de casilla donde aparece por primera vez una letra que 
se repite mas adelante en el texto

No es necesario indicar la longitud del array, ya que el ultimo caracter es 0,
que no forma parte del texto

Si no hay letras repetidas, la funcion debe devolver -1*/

int primeraRepetida(char texto[]) {

    // Recorremos el texto desde la primera posición
    for (int i = 0; texto[i] != 0; i = i + 1) {

        // Buscamos la misma letra en posiciones posteriores
        for (int j = i + 1; texto[j] != 0; j = j + 1) {

            // Si la letra en i es igual a la letra en j,
            // significa que la letra se repite
            if (texto[i] == texto[j]) {

                // Devolvemos la posición donde aparece por primera vez
                // una letra que se repite más adelante
                return i;
            }
        }
    }

    // Si no se encontró ninguna letra repetida,
    // devolvemos -1
    return -1;
}

int main() {
    char t1[] = "abca";
    char t2[] = "abc";

    cout << primeraRepetida(t1) << endl; // 0
    cout << primeraRepetida(t2) << endl; // -1

    return 0;
}
//---------------------------------------------------------
//---------------------------------------------------------



