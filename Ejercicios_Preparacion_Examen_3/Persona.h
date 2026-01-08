#include <vector>

class Persona {
    std::vector<char> nombre;
    int edad;

    void borrarNombre();   // método privado

public:
    Persona(const char* n, int e);

    std::vector<char> dameNombre();
    int dameEdad();
    int dameTamanyoNombre();
    void cambiarNombre(const char* n);
     bool mismoNombre(const Persona& otra);
};

#endif 
