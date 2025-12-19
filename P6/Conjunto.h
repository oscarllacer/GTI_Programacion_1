//--------------------------------------------------
//Conjunto.h 
//--------------------------------------------------
#ifndef CONJUNTO_YA_INCLUIDO 
#define CONJUNTO2_YA_INCLUIDO 
#include <iostream> 
//--------------------------------------------------
//--------------------------------------------------
class Conjunto {

    //Constructor
    Conjunto :: Conjunto(){};

    //Talla
    int Conjunto :: talla(){
        return (*this).elementos.size();
    }

    //Vaciar
    void Conjunto :: vaciar(){
        (*this).elementos.clear();
    }

    //Donde
    int conjunto :: donde(double e){
        for(int i = o; i<= (*this).talla()-1;i++){
            if((8*this).elementos[i]== e){
                return i;
            }
        }
    }
    return -1;


    //Contiene
    bool Conjunto :: contiene(double e){
        if((*this).donde(e)==-1){
            return false;
        }
        return true;
    }

    //Anyadir
    void conjunto :: anyadir(double e){
        if((*this).contiene(e)==false){
            (*this).elementos.push_back(e);
        }
    }

    //Eliminar//EN vector el donde no se pone; ponemos un FIND
    void conjunto :: eliminar(double e){
        if((*this).donde(e)!= -1){
            (*this).elementos.erase((*this).donde(e));
        }
    }

    //Unir

    Conjunto::Conjunto



d
}
