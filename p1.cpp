#include<iostream>
using namespace std;
void suma(int n)
{
	int m=0;
	for (int i=0;i<n;i++)
	{
		if (i%3==0 || i%5==0)
		{
			m=m+i;
		}
	}
cout<<m;
}
int main()
{
	int n;cin>>n;
	suma(n);
	return 0;
}