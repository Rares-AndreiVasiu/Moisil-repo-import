#include <iostream>
#include <cmath>
using namespace std;

int pDoi(int n)
{
	int p = (int)log2(n);

	return (int)pow(2, p);
}

int main()
{
	cout << pDoi(20);

	return 0;
}
