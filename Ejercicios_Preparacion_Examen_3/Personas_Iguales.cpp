#include "Persona.h"
/*
diseña e implementa un método para la clase Persona que compruebe si 2 personas tienen el mismo nombre.
Llama al método desde main() para realizar una comprobación automatica de su correcto funcionamiento

*/

bool Persona::mismoNombre(const Persona& p) {
    if (nombre.size() != p.nombre.size())
        return false;

    for (int i = 0; i < nombre.size(); i++) {
        if (nombre[i] != p.nombre[i])
            return false;
    }
    return true;
}

//P.A:
int main() {
    Persona p1("Ana", 20);
    Persona p2("Ana", 30);
    Persona p3("Luis", 25);

    // Prueba 1: nombres iguales
    if (!p1.mismoNombre(p2)) {
        std::cout << "ERROR: p1 y p2 deberian tener el mismo nombre\n";
        return 1;
    }
    // Prueba 2: nombres distintos
    if (p1.mismoNombre(p3)) {
        std::cout << "ERROR: p1 y p3 NO deberian tener el mismo nombre\n";
        return 1;
    }
    return 0;
}   