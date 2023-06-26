#include <iostream>
using namespace std;

bool EsMultiploDe17(int numero) {
    if (numero % 17 == 0) {
    return true;
    } 
    else 
    {
    return false;
    }
}

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (EsMultiploDe17(numero)) {
    cout << numero << " es múltiplo de 17." << endl;
    } 
    else 
    {
    cout << numero << " no es múltiplo de 17." << endl;
    }

    return 0;
}
