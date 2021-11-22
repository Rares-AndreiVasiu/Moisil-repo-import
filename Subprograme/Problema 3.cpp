#include <iostream>
using namespace std;

void suma(int n, int& suma)
{
	suma = 0;

	while (n)
	{
		if ((n % 10) & 1)
			suma += n % 10;

		n /= 10;
	}
}

int main()
{
	int n, s;

	cin >> n;

	suma(n, s);

	cout << s;

	return 0;
}
