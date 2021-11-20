#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("date.in");

char s[256], voc[] = "aeiou";

void elimincar(char s[256], char c)
{
	for (unsigned i = 0; i < strlen(s); ++i)
	{
		if (s[i] == c)
		{
			char aux[256] = "";

			strcpy_s(aux, 256, s + i + 1);

			strcpy_s(s + i, 256, aux);
		}
	}
}

int main()
{
	fin.get(s, 256);

	for (unsigned i = 0; i < strlen(voc); ++i)
		elimincar(s, voc[i]);

	cout << s;

	return 0;
}
