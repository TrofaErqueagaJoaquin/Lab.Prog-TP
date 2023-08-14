#include <iostream>
#include <string>
using namespace std;

int ContarVocales(string f);
int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    cout <<"La cantidad de vocales del mensaje dado es:"<<ContarVocales(frase)<<endl;
    return 0;
}

int ContarVocales(string f) {
    int V = 0;

    for (int i = 0; i < f.size(); i++) {

        if ( f[i] == 'a' || f[i] == 'e' || f[i] == 'i' || f[i] == 'o' || f[i] == 'u')
		V++;
		
    }
    return V;
}