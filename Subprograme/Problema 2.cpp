#include <iostream>
#include <cmath>
using namespace std;

int baza(int n)
{
	int cifmax = 0;

	while (n)
	{
		cifmax = max(cifmax, n % 10);

		n /= 10;
	}

	//baza e cif max + 1
	return cifmax + 1;
}

int main()
{
	cout << baza(50731);
}
