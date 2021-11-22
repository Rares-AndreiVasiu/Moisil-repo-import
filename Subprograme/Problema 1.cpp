#include <iostream>
using namespace std;

void fii(int n)
{
	for (int i = n; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
			if (i * j == n)
				cout << "(" << i << ", " << j << ")" << " ";
	}
}

int main()
{
	fii(12);

	return 0;
}
