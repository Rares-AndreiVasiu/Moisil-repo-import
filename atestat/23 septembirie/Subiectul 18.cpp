#include <iostream>
#include <fstream>

std::ifstream fin("matrice.in");
std::ofstream fout("matrice.out");

int n, v[101][101];

int suma(int x[101][101], int n, int p)
{
	int s = 0;

	for (int i = 1; i <= n; ++i)
		s += x[p][i];

	return s;
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			fin >> v[i][j];

	for (int i = 1; i <= n; ++i)
		if (!(suma(v, n, i) & 1))
			fout << i << ' ';

	fin.close();
	fout.close();

	return 0;
}
