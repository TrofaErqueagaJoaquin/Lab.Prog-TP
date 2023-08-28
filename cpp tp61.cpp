#include <bits/stdc++.h>
using namespace std;

bool Esgrito(string f);

int main()
{
    string frase;
    string msg="escrito";
    cout<<"Ingrese una frase: ";
    getline(cin, frase);
    if (Esgrito(frase)) {
        msg="ESGRITO";
    }
    cout<<msg<<endl;
    return 0;
}
bool Esgrito(string f){
    bool flag=false;
    string abc="ABCDFGHIJKMNÑOPQRSTUVWXYZ";
    int exclamacion=0;
    int letras=0;
    for(int i=0;i<f.size();i++)
    {
        if(abc.find(f[i]) != string::npos)
        {
            letras++;
        }
        if(f[i]=='!')
        {
            exclamacion++;
        }
    }
    if (exclamacion>letras)
    {
        flag=true;
    }
    return flag;
}

