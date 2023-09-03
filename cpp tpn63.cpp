#include <bits/stdc++.h> 
using namespace std;

 
string DividirPalabra (string f, string l);

int main ()
{
    string frase;
    string espacio;
 
    cout << "ingresar una frase: ";
    getline (cin, frase);
    cout << DividirPalabra (frase, espacio);
    } 
    
    
    string DividirPalabra (string f, string espacio)
    {
    int i;
    espacio = " ";
    string n;
    string aux;
 
    for (i = 0; i < f.size (); i++)
    {
    if (f[i] == espacio[0])
	{
    n += "'" + aux + "'";
    aux = " ";
    }else{
    aux += f[i];
    }
    }
    n += "'" + aux + "'";
      aux = " ";
    return n;

    }
