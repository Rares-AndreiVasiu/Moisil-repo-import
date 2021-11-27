#include <iostream>
#include <fstream>
#include <cmath>

std::ifstream fin("date.in");

int v[101][101], mx, indice, n, m;

int sub(int A[101][101], int n, int k)
{
	int suma = 0;

	for (int i = 1; i <= n; ++i)
		suma += A[k][i];

	return suma;
}

int main()
{
	fin >> n >> m;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			fin >> v[i][j];

	for (int i = 1; i <= n; ++i)
	{
		int suma = sub(v, m, i);

		if (suma > mx)
		{
			mx = suma;

			indice = i;
		}
	}

	std::cout << indice << ' ' << mx;

	return 0;

}
