#include <bits/stdc++.h> 
using namespace std;

 
string CambiarEspPorCaracter (string f, string crt);

int main ()
{
    string frase;
    string crt;
 
    cout << "ingresar una frase: ";
    getline (cin, frase);
    cout << "ingresar un caractér: ";
    cin >> crt;
    cout << CambiarEspPorCaracter (frase, crt);
    } 
    
    
    string CambiarEspPorCaracter (string f, string crt)
    {
    string n;
    
    for (int i = 0; i < f.size (); i++)
    {
    if (f[i] == ' ')
    {
    n += crt;
    }else{
    n += f[i];
    }
    }
    
    return n;
}
