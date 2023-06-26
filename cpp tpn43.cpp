#include <iostream>
using namespace std;

string ObtenerCiudad(int numero) {
    if (numero==61) {
    return "Brasilia";
    } 
    else if (numero==71) {
    return "Salvador";} 
    else if (numero==11) {
    return "Sao Paulo";} 
    else if (numero==21) {
    return "Rio de Janeiro";} 
    else if (numero==32) {
    return "Juiz de Fora";} 
    else if (numero==19) {
    return "Campinas";} 
    else if (numero==27) {
    return "Vitoria";} 
    else if (numero==31) {
    return "Belo Horizonte";} 
    else {
    return "DDD NO ENCONTRADO";}
}

int main() {
    int numero;
    cout << "Ingrese el número de área: ";
    cin >> numero;

    string ciudad = ObtenerCiudad(numero);
    cout<<"El número de área "<<numero<<" corresponde a"<<ciudad<<endl;

    return 0;
}
