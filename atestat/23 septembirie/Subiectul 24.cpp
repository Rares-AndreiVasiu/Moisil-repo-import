#include <iostream>
#include <fstream>

std::ifstream fin("date.in");

int mx, a[101][101], n;

void sub(int a[101][101], int n, int& max)
{
	max = a[1][1];

	for (int i = 2; i <= n; ++i)
		if (max < a[i][i])
			max = a[i][i];
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			fin >> a[i][j];

	sub(a, n, mx);

	std::cout << mx;
}
