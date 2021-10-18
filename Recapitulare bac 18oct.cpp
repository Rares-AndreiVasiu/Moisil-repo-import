#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

ifstream fin("bac.in");

int x, ap[100], ct;

int main()
{
	while (fin >> x)
		if (x >= 10 and x <= 98 and x % 10 != (x / 10)  % 10)
			ap[x]++;

	for(int i = 99; i >= 10; -- i)
		if (ap[i] == 0 and ct < 2 and i % 10 != (i / 10) % 10)
		{
			cout << i << ' ';

			ct++;
		}

	return 0;
}
