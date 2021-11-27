#include <iostream>
#include <cstring>
#include <fstream>

std::ifstream fin("date.in");

void Sub(char t[])
{
	t[0] = toupper(t[0]);

	t[strlen(t) - 1] = toupper(t[strlen(t) - 1]);
}

char* p, * nextp;
char s[251];

int main()
{
	fin.getline(s, 251);
	fin.close();

	p = strtok_s(s, " ", &nextp);

	while (p)
	{
		Sub(p);

		std::cout << p << ' ';

		p = strtok_s(NULL, " ", &nextp);
	}

	return 0;
}
