#include "polinomio.h"
#include <vector>
#include <string>
using namespace std;
#include <iostream>

Polinomio::Polinomio()
    :coeficientes()
{}
Polinomio::Polinomio(const std::vector<double> coeficientes)
    :coeficientes(coeficientes)
{}
unsigned int Polinomio::grado(){
    return (*this).coeficientes.size() - 1;
}
double Polinomio::coeficiente(unsigned int casilla){
    return (*this).coeficientes[casilla];
}
double Polinomio::valor(double x){
    double sumatorio = (*this).coeficientes[0] + ((*this).coeficientes[1] * x);
    double xElevado = x;
    for (int i = 2; i <= (*this).coeficientes.size() - 1; i++){
        xElevado = xElevado * xElevado;
        sumatorio = sumatorio + ((*this).coeficientes[i]*xElevado);
    }
    return sumatorio;
}
Polinomio Polinomio::multiplicar(double n){
    std::vector<double>nuevoPolinomio;
    for (int i = 0; i <= (*this).coeficientes.size() - 1; i++){
        nuevoPolinomio[i] = (*this).coeficientes[i] * n;
    }
    return  Polinomio(nuevoPolinomio);
}
Polinomio Polinomio::sumar(Polinomio suma){
    unsigned int gradoMayor;
    if ((*this).grado()>suma.grado()){
        gradoMayor = (*this).grado();
    }else{
        gradoMayor = (*this).grado();
    }
    std::vector<double>sumas;
    for (int i = 0; i <= gradoMayor; i++){
        sumas[i] = (*this).coeficientes[i] + suma.coeficientes[i];
    }
    return Polinomio(sumas);
}
void Polinomio::aTexto(){
    cout<<"Tu polinomio es: ";
    for (int i = (*this).grado(); i >= 1 ; i--){
        cout<<(*this).coeficientes[i];
        cout << "x^" << i;
        cout<<" + ";
    }
    cout<<(*this).coeficientes[0];
}