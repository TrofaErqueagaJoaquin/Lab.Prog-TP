#include <iostream>
using namespace std;

int ConvertirPesos(float dolares) 
{
    float pesos=dolares*331.37;
    return pesos;
}

int main() {
    float dolares;
    cout<<"Ingrese una cantidad de dolares: ";
    cin>>dolares;
    
    float pesos = ConvertirPesos(dolares);
    cout<<"La cantidad de " <<dolares<<" dolares en pesos es de: "<<pesos<<endl;

    return 0;
}

