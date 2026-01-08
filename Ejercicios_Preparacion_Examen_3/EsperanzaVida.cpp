#include <iostream>


/*
Diseña e implementa una funcion que calcule la esperanza de vida de una persona.

Para ello se suma los numeros del DNI tantas veces como carácteres tiene su nombre. 

Realiza una P.A desde main()
*/

int sumaDigitosDNI(string dni) {
 int suma = 0;
 for (int i = 0; i < 8; i = i + 1) { // suponemos DNI de 8 cifras
 int digito = dni[i] - 48; // 48 es el código ASCII del '0'
 suma = suma + digito;
 }
 return suma;
}

int esperanzaVida(string dni, string nombre) {
 int suma = sumaDigitosDNI(dni);
 int veces = 0;
 for (int i = 0; nombre[i] != '\0'; i = i + 1) {
 veces = veces + 1;
  }
  return suma * veces;
 }

 main(){
pruebaEsperanza() {
// Prueba automática: DNI "12345678" ; nombre "Ana" (3 caracteres)
// suma digitos = 1+2+3+4+5+6+7+8 = 36 ; 36*3 = 108
int esperado = 108;
int obtenido = esperanzaVida("12345678", "Ana");
if (obtenido == esperado) {
std::cout << "Prueba 1 (esperanzaVida): OK\n";
return true;
} else {
std::cout << "Prueba 1 (esperanzaVida): FALLA - se obtuvo " << obtenido << " pero se esperaba " << esperado << "\n";
return false;
}
}
 }