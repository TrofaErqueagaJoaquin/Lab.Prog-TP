#include <bits/stdc++.h>

using namespace std;

bool EsNombreElegante(string nombre);

int main() {
    string nombre;

    cout << "Ingrese un nombre: ";
    cin >> nombre;

     if (EsNombreElegante(nombre)) {
        cout << "El nombre " << nombre << " es elegante." << endl;
    } else {
        cout << "El nombre " << nombre << " no es elegante." << endl;
    }

    return 0;
}

bool EsNombreElegante(string nombre) {
    int longitud = nombre.size();

    if (nombre [0] == 'a' && nombre [longitud - 1] == 'a') {
        return true;
    }

    return false;
}