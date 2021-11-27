#include <iostream>
#include <fstream>
#include <cstring>

std::ifstream fin("date.in");

char s[251], prefix[21], *p, *nextp;

bool Sub(char t1[], char t2[])
{
	if (strstr(t2, t1) - t2 == 0)
		return true;

	return false;
}

int main()
{
	fin.getline(s, 251);

	fin >> prefix;

	fin.close();

	p = strtok_s(s, " ", &nextp);

	while (p)
	{
		if (Sub(prefix, p))
			std::cout << p << ' ';

		p = strtok_s(NULL, " ", &nextp);
	}

	return 0;
}
