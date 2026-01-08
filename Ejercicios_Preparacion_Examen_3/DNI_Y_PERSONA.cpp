#include "Persona.h"

/*
implementa todo junto la clase Persona teniendo en cuenta que ahora persona contiene un DNI. 
Además, el nombre es un string

Escribe el codigo que necesitarás para crear un objeto Persona mediante una estancia a 
Persona con los siguientes datos:

"Pepe", edad:23, numero DNI; 40316328, letra: 'S'.
*/


Persona::Persona(const std::string& n, int e, const DNI& d)
    : nombre(n), edad(e), dni(d) {}

std::string Persona::dameNombre() {
    return nombre;
}

int Persona::dameEdad() {
    return edad;
}

char Persona::dameLetraDNI() {
    return dni.dameLetraDNI();
}

//PA:

int main() {
    std::vector<int> num = {4,0,3,1,6,3,2,8};
    DNI d(num, 'S');
    Persona p("Pepe", 23, d);

    if (p.dameNombre() != "Pepe") std::cout << "ERROR nombre\n";
    if (p.dameEdad() != 23) std::cout << "ERROR edad\n";
    if (p.dameLetraDNI() != 'S') std::cout << "ERROR DNI\n";

    std::cout << "Prueba terminada\n";
    return 0;
}
