#include <iostream>
#include <cstring>

bool flag = true;

char sir1[101], sir2[101];

int l1, l2;

int nrap(char s[101], char c)
{
	int aparitii = 0;

	for (unsigned i = 0; i < strlen(s); ++i)
		if (c == s[i])
			aparitii++;

	return aparitii;
}

int main()
{
	std::cin.getline(sir1, 101);

	std::cin.getline(sir2, 101);

	l1 = strlen(sir1);
	l2 = strlen(sir2);

	if (l1 != l2)
	{
		flag = false;

		std::cout << "NU";
	}
	else
	{
		for (int i = 0; i < l1; ++i)
		{
			char c = sir1[i];
			int frecv2 = nrap(sir2, sir1[i]);

			int frecv1 = nrap(sir1, c);

			if (frecv1 != frecv2)
			{
				flag = false;
				std::cout << "NU";

				break;
			}
		}

		if (flag)
			std::cout << "DA";
	}

	return 0;
}
