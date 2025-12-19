//--------------------------------------------------
//Conjunto.h 
//--------------------------------------------------
#ifndef CONJUNTO_YA_INCLUIDO 
#define CONJUNTO2_YA_INCLUIDO 
#include <iostream> 
//--------------------------------------------------
//Por lista
//--------------------------------------------------
class Conjunto {

    private://con Vectores esto no hará falta pq él mismo lo hace
    int tamanyo =20; //Necesito especificarle el tamaño
    double elementos[tamanyo]; //Estatico
    int numElemento;
    unsigned int donde() const;

    public:
    
    Conjunto();
    unsigned int talla() const;

    void vaciar();

    int donde(double elemento);

    bool contiene(double elemento);

    void anyadir(double elemento);

    void eliminar(double elemento);

    void unir(const Conjunto& otroConjunto);

    void mostrar();
   
}; 

