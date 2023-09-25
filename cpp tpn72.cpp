#include <bits\stdc++.h>
using namespace std;

vector<int> GenerarVector (vector<int> V, int n);
int SumarElementosVector (vector<int> V);
void MostrarVector(vector<int> V);

int main()
{
	vector<int> A;
    int suma;
    int N=100;
	A = GenerarVector(A ,N);
	suma = SumarElementosVector(A);
	MostrarVector(A);
	cout<<"La suma es:"<<suma<<endl;
	return 0;
}

vector<int> GenerarVector (vector<int> V, int n)
{
	int i;        
	srand (time (NULL));
	int e;
	for(i=0; i<n; i++)
	{
		e=rand()%50;	
		V.push_back (e);
	}
	return V;
}

int SumarElementosVector (vector<int> V)
{
	int i;
	int suma=0;
	for(i=0; i<V.size(); i++)
	{
		suma+=V[i];
	}
	return suma;
}

void MostrarVector(vector<int> V)
{
	int i;
	
	for( i=0; i<V.size(); i++ )
	{
	
	cout<<V[i]<<"/";
	}
		cout<<endl;
}
