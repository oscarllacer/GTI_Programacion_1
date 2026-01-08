#include "Conjunto.h"
#include <vector>

Conjunto::Conjunto()
    :elementos()
{}
Conjunto::Conjunto(const std::vector<double> elementos)
    :elementos(elementos)
{}
unsigned int Conjunto::talla() const{
    return (*this).elementos.size();
}

bool Conjunto::contiene(double n){
    for (int i = 0; i <= (*this).elementos.size(); i++){
        if (n == (*this).elementos[i]){
            return true;
        }
    }
    return false;    
}

void Conjunto::anyadir(double n){
    if ((*this).contiene(n)==false){
        (*this).elementos.push_back(n);
    }
}

void Conjunto::eliminar(double n){
    for (int i = 0; i < (*this).talla(); i++){
        if ((*this).elementos[i] == n){
            (*this).elementos.erase( (*this).elementos.begin() + i);
        }
    }
}
Conjunto Conjunto::unir(Conjunto queUnire){
    Conjunto final((*this).elementos);
    for (int i = 0; i < queUnire.talla(); i++){
        final.anyadir(queUnire.elementos[i]);
    }
    return final;
}
void Conjunto::vaciar(){
    (*this).elementos.clear();
}