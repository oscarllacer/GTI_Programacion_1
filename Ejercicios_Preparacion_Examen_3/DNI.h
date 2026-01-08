#ifndef DNI_H
#define DNI_H

#include <vector>

class DNI {
    std::vector<int> numero; // cifras del DNI
    char letra;

public:
    // Constructor
    DNI(const std::vector<int>& num, char l);

    // Métodos pedidos
    char dameLetraDNI();
    std::vector<int> dameNumeroDNI();
    std::vector<char> dameDNI();
};

#endif
