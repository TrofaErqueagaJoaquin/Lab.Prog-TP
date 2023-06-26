#include <iostream>
using namespace std;


int CalcularMaximo(int a , int b) 
{
    return (a > b) ? a : b;
    {
    if (a > b) {
    return a;} 
    else {
    return b;}
    }
}

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    int maximo = CalcularMaximo(num1, num2);
    cout << "El máximo entre "<< num1 <<" y "<< num2 <<" es: "<<maximo<<endl;

    return 0;
}
