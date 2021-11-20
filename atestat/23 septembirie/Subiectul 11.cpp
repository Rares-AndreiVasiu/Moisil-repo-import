#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("date.in");

int n;
char voc[] = "aeiou";

void sub(char s[21], char t[21])
{
	for (int i = 0; i < strlen(s); ++i)
	{
		if (!strchr(voc, s[i]))
			t[i] = s[i];
		else
			t[i] = '*';
	}
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		char cuv[21], aux[21] = "";

		fin >> cuv;
		
		sub(cuv, aux);

		cout << aux << ' ';
	}

	return 0;
}
