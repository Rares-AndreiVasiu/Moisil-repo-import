#include <iostream>
#include <fstream>

std::ifstream fin("BAC.TXT");

int verif(int x[101][101], int n, int p)
{
	for (int j = 1; j <= n / 2; ++j)
		if (x[p][j] != x[p][n - j + 1])
			return false;

	return true;
}

int m, n, ct;
int v[101][101];

int main()
{
	fin >> m >> n;

	for (int i = 1; i <= m; ++i)
		for (int j = 1; j <= n; ++j)
			fin >> v[i][j];

	for (int i = 1; i <= m; ++i)
		if (verif(v, n, i))
			ct++;

	std::cout << ct;

	fin.close();
	return 0;
}
