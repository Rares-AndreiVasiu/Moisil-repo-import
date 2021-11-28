#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

std::ifstream fin("date.in");

bool flag;

char s[101][21];

int n;

bool sub(std::string a, std::string b)
{
	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());

	if (a.compare(b) == 0)
		return true;

	return false;
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
		fin >> s[i];

	for (int i = 1; i < n; ++i)
	{
		for (int j = i + 1; j <= n; ++j)
		{
			if (sub(s[i], s[j]))
			{
				std::cout << s[i] << ' ' << s[j] << '\n';

				flag = true;
			}
		}
	}

	if (!flag)
		std::cout << "NU EXISTA";

	return 0;
}
