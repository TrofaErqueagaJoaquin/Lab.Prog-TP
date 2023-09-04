#include <bits/stdc++.h>
using namespace std;

string CaracterEntreLetras(string f, string crt);

int main() {
    string frase;
    string crt;

    cout << "Escribe un frase: " << endl;
    getline(cin, frase);
    cout << "Escribe un caracter: " << endl;
    cin >> crt;
    
    cout << CaracterEntreLetras(frase, crt) << endl;

    return 0;
}

    string CaracterEntreLetras(string f, string crt) {

    string c;

    for (int i = 0; i < f.size(); i++) {
        c += f[i];

        if (i < f.size()-1) {
            c += crt;
        }
    }

    return c;
}
