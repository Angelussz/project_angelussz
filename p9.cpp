#include <iostream>
using namespace std;

int main()
{
	int na;
	int nb;
	int nc;
	for (na=1; na<=500; na++)
	{
		for (nb=1; nb<=500; nb++)
		{
			nc=1000-nb-na;
			if (na*na+nb*nb-nc*nc == 0 && na<nb )
			{
				cout<<na<<" "<<nb<<" "<<" "<<nc<<" "<<na*nb*nc<<endl;
			}
		}
	}
	return 0;
}
