#include <iostream>
#include <vector>
#include "Conjunto.h" //Practica 6 (PEDIR ALEXMASTER)


/*Ejercicio: Crea un metodo filtrar() para la clase
Conjunto que reciba un polinomio*/


void ConjuntoVector :: filtrar(const Polinommio &p){//ponemos el const porque no vamos a modificar el polinomio ahi pero luego si lo modificaremos
  vector<double> lista;

  for(double x:elementos){//cogemos un elemento (x) de la clase elementos de Conjunto
    //for(int i = 0;  i < talla();i++) tambien se podria hacer de esa forma 
    if(p.valor(x) < 0) lista.push_back(elementos);//lista.push es para guardar los elementos que sean <0
  }
  for(double x:lista){
    eliminar(x);
  }
}

//EN ESTE EJERCICIO PONEMOS: p.valor porque no estamos en la clase Polinomio y si lo queremos usar lo tenemos que poner