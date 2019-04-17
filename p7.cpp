#include<iostream>
using namespace std;
int main()
{
	int a,cant,div;
	cout<<"numeros primos posiciones"<<endl;
	cin>>a;
	cout<<"el numero primo en"<<a<<" es "<<endl;
	cant=a;
	div=a-1;
	a=a-(a-1);
	while(cant>-1)
	{
		 while(div>1)
		 {
		 	if(a%div!=0)
		 	{
		 		div=div-1;
			 }
			 else
			 {
			 	a=a+1;
			 	div=a-1;
			 }
		 }
		 if (a==1)
		 {
		 	div=a-1;
		 	a=a+1;
		 	cant=cant-1;
		 }
		 else
		 {
		 	//cout<<" "<<a<<endl;
		 	div=a-1;
		 	a=a+1;
		 	cant=cant-1;
		 	
		 }
	}
	cout<<a-1;
}
