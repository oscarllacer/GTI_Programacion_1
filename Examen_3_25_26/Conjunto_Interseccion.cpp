#include <iostream>
#include <vector>
/* Diseña un método para la clase Conjunto que reciba una lista de valores y devuelva un nuevo conjunto con los valores de la lista que existen en el conjunto original.
Si C es un conjunto y L una lista de valores, el método debe devolver:
*/

class Conjunto {
private:
    std::vector<double> elementos;

public:
    Conjunto(const std::vector<double>& v) {
        elementos = v;
    }

    bool contiene(double x) const {
        for (double e : elementos) {
            if (e == x)
                return true;
        }
        return false;
    }

    Conjunto interseccion(const std::vector<double>& valores) const {
        std::vector<double> resultado;

        for (double v : valores) {
            if (contiene(v)) {
                resultado.push_back(v);
            }
        }

        return Conjunto(resultado);
    }
};

main(){
    std::vector<double> valores = {1, 2, 3, 4};
    std::vector<double> prueba = {2, 3, 6};

    Conjunto c1(valores);
    Conjunto c2 = c1.interseccion(prueba);

}
