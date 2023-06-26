#include <iostream>
using namespace std;

int CalcularDoble(int n) 
{
    int doble=n*2;
    return doble;
}

int main() {
    int numero;
    cout<<"Ingrese un número: ";
    cin>>numero;
    
    int doble = CalcularDoble(numero);
    cout<<"El doble de " <<numero<<" es: "<<doble<<endl;

    return 0;
}

