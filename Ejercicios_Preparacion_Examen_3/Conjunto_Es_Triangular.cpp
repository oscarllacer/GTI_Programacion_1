#include <iostream>
#include <vector>
using namespace std;

/*1-Escribe una funcion que diga si un Numero Natural es triangular
  
  2-Diseña un método de la clase Conjunto que devuelva, en otro Conjunto,
    los números triangulares del conjunto original
*/
//--------------------------------------------------
//--------------------------------------------------
//1:

bool esTriangular(int num){
    int suma = 0;
    for(it i = 1; suma < num; i++){
        suma = suma + i;
    }
    return (suma == num);
}

//PA:
main(){
    int numero = 10;
    if(!esTriangular(numero)){
        cout << "Error"; 
    }
    return o;
};
// ------------------------------------
//-------------------------------------
// Ejercicio 2
    Conjunto esTriangular() {
        Conjunto resultado;
        for(int i = 0; i < tamaño; i++){
            if(esTriangular(datos[i])){
                resultado.anyadir(datos[i]);
            }
        }

        return resultado;
    };
  //Alexmaster:
    Conjunto conjunto::Conjunto triangulares(){
        std::vector<unsigned>triangular;
        for(int i  = 0; i < = (*this).talla()-1; i++){
            if(triangular((*this).elementos[i]==true)){
                triangulares.push_back((*this).elementos[i]);
            }
        }
        return Polinomio(triangulares)
    }
// ------------------------------------
//-------------------------------------
// Programa de prueba
int main() {
    Conjunto c;
    c.anyadir(1);
    c.anyadir(3);
    c.anyadir(6);
    c.anyadir(7);
    c.anyadir(10);
    c.anyadir(15);

    Conjunto t = c.triangulares();

    cout << "Numeros triangulares: ";

    return 0;
}

