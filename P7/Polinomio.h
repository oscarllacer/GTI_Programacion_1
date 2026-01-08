#ifndef POLINOMIO_H
#define POLINOMIO_H    

#include <vector>
#include <string>

class Polinomio{

    private:
    vector<double> coeficientes;

    public:
    //Constructores
    Polinomio()
    Polinomio(const string &text);
    Polinomio(const vector<double> &coef);

    //Otros metodos:

    int grado() const;
    double coeficientes(int i) const;
    double valor(double x) const; //ponemos el const porque no modifica el polinomio
    Polinomio multiplicar(double v) const;
    Polinomio sumar(cont Polinomio &otro)  const;
    string aTexto() const; 

};
#endif