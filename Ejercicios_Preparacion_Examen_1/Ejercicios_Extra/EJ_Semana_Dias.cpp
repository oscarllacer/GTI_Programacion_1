/*
Crear una función que reciba un número de días y los convierta a semanas y 
días (por ejemplo, para 9 días: 1 semana y 2 días).
El resultado se guardará en un array de dos posiciones.

Diseño:

l<N> ----> Convertir()--> l<N>

*/

void convertir(int dias, int resultado[]){
    resultado[0] = dias / 7;
    resultado[1] = dias % 7;

}

int main(){
    int dias = 9;
    int resultado[2];
    convertir(dias, resultado);
    if(resultado != 1 semana y 2 dias){cout <<"Va mal"<<endl;}

    return 0;
}