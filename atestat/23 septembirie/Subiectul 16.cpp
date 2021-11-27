#include <iostream>
#include <fstream>
#include <climits>
#include <cmath>

std::ifstream fin("mat.in");
std::ofstream fout("mat.out");

int n, m, mx = INT_MIN, ct;
int v[31][31], min_col[31];

int main()
{
	fin >> n >> m;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
		{
			fin >> v[i][j];

			mx = std::max(mx, v[i][j]);
		}

	for (int k = 1; k <= m; ++k)
	{
		int min_local = v[1][k];

		for (int i = 2; i <= n; ++i)
			min_local = std::min(min_local, v[i][k]);

		min_col[k] = min_local;
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (v[i][j] == mx)
			{
				ct++;

				v[i][j] = min_col[j];
			}
		}
	}

	if (ct > 0)
	{
		for (int i = 1; i <= n; ++i, fout << '\n')
			for (int j = 1; j <= m; ++j)
				fout << v[i][j] << ' ';

		fout << ct;
	}
	fin.close();
	fout.close();

	return 0;
}
