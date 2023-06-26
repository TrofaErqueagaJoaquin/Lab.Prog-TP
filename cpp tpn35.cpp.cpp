#include <iostream>
using namespace std;

int main()
{
    int n, f=1;
    cout<<"Ingresar un número"<<endl;
    cin>>n;

    for (int i=1;i<=n;i++){
    f = f*i;
    }
    cout<<"El factorial de "<<n<<"! es: "<<f<< endl;
    return 0;
}
