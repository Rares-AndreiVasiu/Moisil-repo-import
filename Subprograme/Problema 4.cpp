#include <iostream>
#include <cmath>
using namespace std;

void patrate(int x, int y)
{
	int suma = 0, left, right;

	left = sqrt(x);
	right = sqrt(y);

	if ( !(ceil((double)sqrt(x)) == floor((double)sqrt(x))))
		left++;

	cout << left << ' ' << right << '\n';

	for (int i = left; i <= right; ++i)
		suma += i * i;

	cout << suma;
}

int main()
{
	patrate(16, 48);

	return 0;
}
