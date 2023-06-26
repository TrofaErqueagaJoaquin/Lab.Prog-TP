#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un número (no mas de 50): ";
    cin >> numero;

if (numero > 50){
    cout << "El número ingresado es mayor a 50, ingrese un número válido." << endl;
    return 0;
    }
    
for (int i=1; i <= numero; i++)
    {
        for (int j=1; j <= i; j++){
        cout<<j;
    }
    cout<<endl;
    }

    return 0;
}
