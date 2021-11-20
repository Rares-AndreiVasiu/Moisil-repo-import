#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");

int n, v[101][101], suma;

int sub(int n, int a[101][101], int k)
{
	int suma = 0;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			if (i + j == k)
				suma += a[i][j];

	return suma;
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			fin >> v[i][j];

	for (int i = 2; i < n + 1; ++i)
	{
		suma += sub(n, v, i);
	}

	cout << suma;

	return 0;
}
