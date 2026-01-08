#include <iostream>

/* FUNCION QUE DIGA SI 2 POLINOMIOS SON DIVISIBLES ENTRE SI (SIN USAR WHILE)
   
  P(x) = x^2 - 1  y   Q(x) = x - 1
  
  
*/  

double evaluar(double p[], int grado, double x)
{
    double resultado = 0;

    for (int i = grado; i >= 0; i--)
        resultado = resultado * x + p[i];

    return resultado;
}

int divisible(double P[], int gradoP, double Q[])
{
    
    double a = -Q[0] / Q[1]; // Q(x) = x - a  →  Q[1]x + Q[0]

    if (evaluar(P, gradoP, a) == 0)
        return 1;
    else
        return 0;
}

//PA:
int main()
{
    double P[] = {-1, 0, 1}; // P(x) = x^2 - 1
    double Q[] = {-1, 1};// Q(x) = x - 1

    if (divisible(P, 2, Q))
        cout << "SI";
    else
        cout << "NO";
        
    return 0;
}