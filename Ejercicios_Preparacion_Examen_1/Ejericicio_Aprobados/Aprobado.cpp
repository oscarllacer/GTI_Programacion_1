/*
Diseña, escribe el algoritmo y desarrolla una función
llamada APROBADO() que reciba la nota de un alumno
y devuelva verdadero si la nota es mayor o = a 5,
y falso en caso contrario. 
Esta función será llamada desde la función principal
*/
//-----------------------------------------------------
//-----------------------------------------------------
/* ALGORITMO:

  Datos Entrada: nota:R
  Datos Salida: Booleano: B

  res <- falso

  Si nota >=5 -> res = true  //Devolver res
*/
//-----------------------------------------------------
//-----------------------------------------------------
#include <iostream>
using namespace std;

bool aprobado(double nota){
    bool res = false;
    if(nota>=5){
        res = true;
    }
    return res;
}

int main(){
    double n=7;
    bool resultado;
    resultado = aprobado(n);
    
//TEST AUTOMATICO: ponemos un caso nosotros a mano y comprobamos que el resultado es correcto o falso con los if (lo pide Jordi para el EXAMEN)
if(resultado != false) coout <<"El resultado no es correcto"<< endl;
if(resultado ==false) cout << "El resultado es correcto" << endl;

//TEST 2:
n=6.7;

resultado = aprobado(n);
//if(resultado == false) coout <<"El resultado no es correcto"<< endl;
if(resultado ==true) cout << "Test 2: El resultado es correcto" << endl;
//cout << resultado
return 0;
}

