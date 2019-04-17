#include<iostream>
using namespace std;
int todo(long num)
{
	int cont=0;
	int a=1;
	for(a;a<=20;a++)
	{
		if (num%a==0)
		{
			cont=cont+1;
		}
	}
	return cont;
}
int main()
{
	long i=40;
	while(todo(i)!=20)
	{
		i++;
	}
	if(todo(i)==20)
	   cout<<i;
}
