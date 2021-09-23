#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("numere.in");

int maxim(int a[],int &n)
{
	int maxi=0;

    for(int i = 0; i < n; i ++)
		if(a[i] > maxi)
			maxi = a[i];

	for(int i = 0; i < n; i ++)
		if(a[i] == maxi)
		{
			for(int p = i; p < n - 1; p ++)
				a[i] = a[i  +1];
			i--;

			n--;
		}
	return maxi;
}

int a[100],n;

int main ()
{
    fin>>n;

    for(int i = 0; i < n; i ++)
		fin >>a [i];

	while(n)
		cout<<maxim(a,n) << ' ';

return 0;
}
