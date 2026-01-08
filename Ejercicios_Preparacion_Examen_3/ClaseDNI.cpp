#include "DNI.h"

/*Implementa la clase DNI que contiene un vector con el numero del DNI y un caracter con la letra. 
Diseña e implementa la clase teniendo en cuenta que necesitarás los siguientes metodos:
dameLetraDNI();
dameNumeroDNI();
dameDNI();
*/

std::vector<char> DNI::dameDNI() {
    std::vector<char> resultado;

    for (int i = 0; i < numero.size(); i++) {
        resultado.push_back('0' + numero[i]);
    }

    resultado.push_back(letra);
    return resultado;
}

//PA:

int main() {
    int errores = 0;

    // DNI de prueba: 12345678Z
    std::vector<int> numero;
    numero.push_back(1);
    numero.push_back(2);
    numero.push_back(3);
    numero.push_back(4);
    numero.push_back(5);
    numero.push_back(6);
    numero.push_back(7);
    numero.push_back(8);

    DNI d(numero, 'Z');

    // Prueba dameLetraDNI
    if (d.dameLetraDNI() != 'Z') {
        std::cout << "ERROR en dameLetraDNI\n";
        errores++;
    }

    // Prueba dameNumeroDNI
    if (!igualesInt(d.dameNumeroDNI(), numero)) {
        std::cout << "ERROR en dameNumeroDNI\n";
        errores++;
    }

    // Prueba dameDNI
    std::vector<char> dniEsperado;
    dniEsperado.push_back('1');
    dniEsperado.push_back('2');
    dniEsperado.push_back('3');
    dniEsperado.push_back('4');
    dniEsperado.push_back('5');
    dniEsperado.push_back('6');
    dniEsperado.push_back('7');
    dniEsperado.push_back('8');
    dniEsperado.push_back('Z');

    if (!igualesChar(d.dameDNI(), dniEsperado)) {
        std::cout << "ERROR en dameDNI\n";
        errores++;
    }

    if (errores == 0)
        std::cout << "Pruebas superadas correctamente\n";
    else
        std::cout << "FALLARON " << errores << " pruebas\n";

    return errores;
}