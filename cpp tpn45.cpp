#include <iostream>
using namespace std;

bool EsBisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) 
    {
    return true;
    } 
    else 
    {
    return false;
    }
}

int main() {
    int anio;
    cout<<"Ingrese un año: ";
    cin>>anio;

    if (EsBisiesto(anio)) 
    {
    cout<<"SI"<<endl;
    }
    else
    {
    cout<<"NO"<<endl;
    }

    return 0;
}

