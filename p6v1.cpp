#include<iostream>
#include<cmath>
using namespace std;
int sumacuadrado(int n)
{
	int i=1,cont;
	for(i;i<=n;i++)
	{
		cont=cont+pow(i,2);

	}
	return cont;
}

int cuadradosuma(int n)
{
	int i=1,cont=0;
	for(i;i<=n;i++)
	{
		cont=cont+i;
	}
	return pow(cont,2);
}
int resta(int a,int b)
{
	return b-a;
}
int main()
{
	int n,a,b,total;
	cout<<"ingrese los n primeros numeros: ";
	cin>>n;
	cout<<"Suma de cuadrados: ";
	cout<<sumacuadrado(n)<<endl;
	a=sumacuadrado(n);
	cout<<"Cuadrado de suma: ";
	b=cuadradosuma(n);
	//cout<<cuadradosuma(n)<<endl;
	cout<<"resta: ";
	cout<<resta(a,b)<<endl;
	return 0;
}
