#include <iostream>
using namespace std;
 double porTres(double a){
    double resultado=a*3;
    return resultado;
}
int main (){
  double resultadoPorTres;
  resultadoPorTres=porTres(2);
  cout << resultadoPorTres << endl;
  return 0;
}
