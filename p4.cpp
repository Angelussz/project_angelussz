#include<iostream>
using namespace std;
int invertir(int n)
{
	int respuesta=0;
	while (n>0)
	{
	respuesta=respuesta+n%10;
	respuesta=respuesta*10;
	n=n/10;
    }
    return respuesta/10;
	
}
 
bool palindromo(int num)
{
	if (num==invertir(num))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int main()
{
	int a=999,b=999,total,mayor=0;
	int max[1000];
	for(int i=a;i>99;i--)
	{
		for(int j=b;j>99;j--)
		{
			total=i*j;
			if (palindromo(total)==true)
			{
				max[i]=total;
				if (max[i]>mayor)
				{
					mayor=max[i];
				}
				
			}
		}
	}
	cout<<mayor;
	return 0;
}
