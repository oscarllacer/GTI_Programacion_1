#include <iostream>

/*diseña e implementa un nuevo metodo para la clase Polinomio de la practica 7 
para decidir(verdadero o falso) 
si dos polinomios son iguales (tiene los mismo coeficientes)*/

bool Polinomio::iguales(Polinomio p){//LOS NOMBRES DE METODOS NO EMPIEZAN NUNCA POR MAYUSCULA, LAS CLASES SI EMPIEZAN POR MAYUSCULA
    if((*tis).coeficientes.size() != p.coeficientes.size()){
        return false;
    }
    for(int i = 0; i < (*this).coeficientes.size(); i++){
        if((*this).coeficientes(i) != p.coeficientes(i)){
          return false;
        }
        
    }
    return true;

}

