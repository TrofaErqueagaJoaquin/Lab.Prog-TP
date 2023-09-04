#include <bits/stdc++.h>
using namespace std;

string Geringoso(string f);

int main() {
    string frase;

    cout << "Escribe la frase a traducir" << endl;
    getline(cin, frase);
    cout << "Así queda la frase en geringoso: " << Geringoso(frase) << endl;

    return 0;
}

    string Geringoso(string f) {

    string c;

    for (int i = 0; i < f.size(); i++) {
        c += f[i];

        if (tolower(f[i]) == 'a' || tolower(f[i]) == 'e' ||
            tolower(f[i]) == 'i' || tolower(f[i]) == 'o' ||
            tolower(f[i]) == 'u') {
            c += 'p';
            c += f[i];
        }
    }

    return c;
}
