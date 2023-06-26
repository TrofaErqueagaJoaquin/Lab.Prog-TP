#include <iostream>
using namespace std;

int CalcularMax(int a, int b, int c) {
    int maximo = a;
    if (b > maximo) {
    maximo = b;
    }
    if (c > maximo) {
    maximo = c;
    }
    return maximo;
}

int main() {
    int num1, num2, num3;
    cout<<"Ingrese el primer número: ";
    cin>>num1;
    cout<<"Ingrese el segundo número: ";
    cin>>num2;
    cout<<"Ingrese el tercer número: ";
    cin>>num3;

    int maximo = CalcularMax(num1, num2, num3);
    cout<<"El máximo entre "<<num1<<", "<<num2<<" y "<<num3<<" es: "<<maximo<<endl;

    return 0;
}

