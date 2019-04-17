#include<iostream>
using namespace std;
void fmax(unsigned long long  n)
{
	long long res,aux,i=2;
	aux=n;
	//unsigned long int cont=0;
	//600851475143
	while(i<=aux)
	{
		/*if(aux%i==0)
		{
			aux=aux/i;
			
			if(res<i)
			{
				res=i;
			}}
		else
		{
			i++;
		}
		cout<<aux;*/
		while (aux % i == 0) {
            aux /= i;
            if(res<i)
            {
            	res=i;
			}
        }
        i++;
    }
		cout<<res;
	}

int main()
{
    unsigned long long n;cin>>n;
	fmax(n);
	return 0;
}
