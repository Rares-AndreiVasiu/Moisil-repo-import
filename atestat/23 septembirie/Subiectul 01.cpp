#include <iostream>
#include <fstream>
#include <cstring>

std::ifstream fin("date.in");

bool flag;
char s[101];

int n;

bool S1(char s[101])
{
	for (int i = 0; i < strlen(s) / 2; ++i)
		if (s[i] != s[strlen(s) - 1 - i])
			return false;

	return true;
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		fin >> s;

		if (S1(s))
		{
			std::cout << s << '\n';

			flag = true;
		}
	}
	fin.close();

	if (!flag)
		std::cout << "NU EXISTA";

	return 0;
}
