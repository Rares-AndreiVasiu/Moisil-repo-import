#include <iostream>
#include <fstream>
#include <cstring>

std::ifstream fin("date.in");

char* Sub(char s[51])
{
	char* aux = new char[110];

	char voc[] = "aeiou";

	int k = 0;

	for (int i = 0; i < strlen(s); ++i)
	{
		aux[k++] = s[i];

		if (!strchr(voc, s[i]))
		{
			aux[k++] = s[i];
		}
	}

	aux[k] = NULL;

	return aux;
}

char s[51];

int main()
{
	fin >> s;
	fin.close();

	char* aux = Sub(s);

	std::cout << aux;

	free(aux);

	return 0;
}
