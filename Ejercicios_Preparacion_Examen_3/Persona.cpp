#include "Persona.h"
/*diseña e implementa la clase Persona que contiene un "nombre" con un Array de caracteres y 
una "edad" de enteros. El nombre puede tener como máximo 10 carácteres.
Además, la clase contiene los siguientes metodos:
-Constructor de la clase
-dameNombre(): devuelve el nombre de la Persona
-dameEdad():devuelve la edad de la Persona
-dameTamanyoNombre(): devuelve el tamaño del nombre de la Persona
-borrarNombre(): metodo privado de la clase que borra el nombre
-cambiarNombre(): cambia el nombre de la Persona*/


void Persona::cambiarNombre(const char* n) {
    borrarNombre();
    for (int i = 0; i < 10 && n[i] != '\0'; i++) {
        nombre.push_back(n[i]);
    }
}
//P.A:

int main() {
    Persona p("Juan", 18);

    comprobar(p.dameEdad() == 18, "Edad incorrecta");
    comprobar(p.dameTamanyoNombre() == 4, "Nombre incorrecto");

    p.cambiarNombre("Alejandro");
    comprobar(p.dameTamanyoNombre() == 9, "Cambio de nombre incorrecto");

    p.cambiarNombre("ABCDEFGHIJKLM");
    comprobar(p.dameTamanyoNombre() == 10, "No limita a 10 caracteres");

    std::cout << "Fin de pruebas" << std::endl;
    return 0;
}
