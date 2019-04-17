#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i=1,j=1,total1,total2,total3,n;
	int cont1=0,cont2=0;
	cin>>n;
	for(i;i<=n;i++)
	{
		cont1=cont1+i;
	}
	total1=pow(cont1,2);

	for(j;j<=n;j++)
	{
		cont2=cont2+pow(j,2);
	}
	total2=cont2;
	total3=total1-total2;
	cout<<total3;
}
