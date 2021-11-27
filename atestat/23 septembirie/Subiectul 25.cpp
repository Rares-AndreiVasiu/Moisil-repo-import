#include <iostream>
#include <fstream>

std::ifstream fin("date.in");

int n, v[101][101];

int S(int a[101][101], int n)
{
	int suma = 0;

	for(int i = 1; i <= n; ++ i)
		for (int j = 1; j <= n; ++j)
		{
			if (i == 1 or j == 1 or i == n or j == n)
				suma += v[i][j];
		}

	return suma;
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			fin >> v[i][j];

	std::cout << S(v, n);

	fin.close();

	return 0;
}
