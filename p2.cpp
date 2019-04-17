#include<iostream>
using namespace std;
void fibo(int n)
{
	unsigned long int cont=0;
	unsigned long int ex1=1,ex2=1,aux;
	if (n==0 ||n==1 )
		cout<<1;
	else
	{
		//cout<<ex;
	    //cout<<ex2;
		for(int i=0;i<n;i++)
		{
			aux=ex2;

			ex2=ex2+ex1;
			ex1=aux;
			if(ex1%2==0 && cont<4000000)
			{
				cont+=ex1;
			}
			//cout<<ex1<<endl;
		}
		
	}
	
	cout<<cont;
}
int main()
{
	 int n;cin>>n;
	fibo(n);
	return 0;
}
