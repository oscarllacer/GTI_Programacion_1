#include <iostream>
#include <vector>

/* Diseña un método para la clase Polinomio llamado igualQue que reciba otro polinomio y una lista de valores xs, y 
devuelva true si ambos polinomios toman el mismo valor para todos los valores de xs.

∀x∈xs,p1​(x)=p2​(x)
*/
class Polinomio {
private:
    std::vector<double> coeficientes; // coef[i] = coeficiente de x^i

public:
    Polinomio(const std::vector<double>& c) {
        coeficientes = c;
    }

    int grado() const {
        return coeficientes.size() - 1;
    }

    double evaluar(double x) const {
        double resultado = 0;
        double potencia = 1;

        for (double c : coeficientes) {
            resultado += c * potencia;
            potencia *= x;
        }

        return resultado;
    }

    bool igualQue(const Polinomio& p2, const std::vector<double>& xs) const {
        if (grado() != p2.grado())
            return false;

        for (double x : xs) {
            if (evaluar(x) != p2.evaluar(x))
                return false;
        }

        return true;
    }
};

main(){
    std::vector<double> p1 = {1, 2, 4};
    std::vector<double> p2 = {1, 2, 4};
    std::vector<double> xs = {2, 6, 4};

    Polinomio P1(p1);
    Polinomio P2(p2);

   if (P1.igualQue(P2, xs)) {
    std::cout << "verdadero";
  } else {
    std::cout << "falso";
   }

}