#include <iostream>
#include <fstream>
#include <cmath>

std::ifstream fin("date.in");

int n, v[101][101];

int maxim(int x[101][101], int n, int p)
{
	int mx = x[p][1];

	for (int i = 2; i <= n; ++i)
		mx = std::max(mx, x[p][i]);

	return mx;
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			fin >> v[i][j];

	for (int i = 1; i <= n; ++i)
		std::cout << maxim(v, n, i) << ' ';

	fin.close();

	return 0;
}
