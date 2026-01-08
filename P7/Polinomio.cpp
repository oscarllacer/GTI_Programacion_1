#include "Polinomio.h"

#include <string>
#include <vector>
#include <cmath>

#include <sstream> //Si se utilizan string streams

//METODOS DE LA CLASE POLINOMIO

Polinomio::Polinomio(){

    coeficientes.push_back(0);
}

Polinomio::Polinomio(const string &text){

    coeficientes.clear();

    //coeficientes <- text " 1 3 0 5" p(x)= 1 + 3x + 5x^3
    std::istringstream iss(text);
    double c;
    coeficientes.clear();//PARA LIMPIAR LOS VALORES QUE LE HEMOS PASADO EN EL  ANTERIOR METODO: //coeficientes.push_back(0); --> el 0 ese 
    while(iss >> c){
     coeficientes.push_back(c); //NO HACE FALTA VOLVER A CREAR EL ARRAY DE COEFICIENTES PORQUE YA LO HEMOS CREADO EN EL .H
    } 
    //if(coeficientes[coeficientes.size()-1]==0.0) coeficientes.pop_back();//coeficiente en la ultima posicion no sea 0, si lo es lo eliminamos 
   while(coeficientes.size()> 1  && coeficientes.back()==0)
   coeficientes.pop_back(); //esto  hace que si  hay varios ceros despues del ultimo valor los elimina y cuando llega  a un valor distinto de cero se para
}
0
//VALOR:

double Polinomio:: valor(double x) const{
    double res=coeficientes.at(0);
    for(i=1; i < coeficientes.size(); i++){//recorre el array de coeficientes
        res= res + coeficientes.at(i)*pow(x, i); 
    }

    //sin pow: HORNER: recorre de atras hacia delante

    double res = 0.0;
    for(int i = coeficientes.size()-1; i>=0; i--){
        res = res  * x + coeficientes.at(i)
    }

}


// ----------------------------------------------------
// Devuelve el grado del polinomio
// ----------------------------------------------------
int Polinomio::grado() const {
    return coeficientes.size() - 1;
}

// ----------------------------------------------------
// Devuelve el coeficiente ai
// ----------------------------------------------------
double Polinomio::coeficiente(int i) const {
    if (i < 0 || i >= coeficientes.size()) {
        return 0.0;
    }
    return coeficientes[i];
}

// ----------------------------------------------------
// Evalúa el polinomio en x (método de Horner)
// ----------------------------------------------------
double Polinomio::valor(double x) const {

    double resultado = 0.0;

    for (int i = coeficientes.size() - 1; i >= 0; i--) {
        resultado = resultado * x + coeficientes[i];
    }

    return resultado;
}

// ----------------------------------------------------
// Multiplica el polinomio por un escalar
// ----------------------------------------------------
Polinomio Polinomio::multiplicar(double v) const {

    std::vector<double> nuevo;

    for (int i = 0; i < coeficientes.size(); i++) {
        nuevo.push_back(coeficientes[i] * v);
    }

    return Polinomio(nuevo);
}

// ----------------------------------------------------
// Suma dos polinomios
// ----------------------------------------------------
Polinomio Polinomio::sumar(const Polinomio &otro) const {

    int maxGrado = std::max(grado(), otro.grado());
    std::vector<double> suma(maxGrado + 1, 0.0);

    for (int i = 0; i <= maxGrado; i++) {
        suma[i] = coeficiente(i) + otro.coeficiente(i);
    }

    return Polinomio(suma);
}

// ----------------------------------------------------
// Convierte el polinomio a texto
// ----------------------------------------------------
std::string Polinomio::aTexto() const {

    std::ostringstream oss;

    for (int i = 0; i < coeficientes.size(); i++) {
        oss << coeficientes[i];
        if (i < coeficientes.size() - 1) {
            oss << " ";
        }
    }

    return oss.str();
}
