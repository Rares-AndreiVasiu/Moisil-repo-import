#include <iostream>
#include <fstream>
#include <cmath>

std::ifstream fin("numere.in");

int aparitii[100];
int x, maxAparitii, nr;

int main()
{
    while(fin >> x)
        aparitii[x]++;

    for(int i = 0; i < 100; ++ i)
        if(aparitii[i] > 0)
        {
            if(maxAparitii < aparitii[i])
            {
                maxAparitii = aparitii[i];

                nr = i;
            }
        }

    std::cout << nr;

    fin.close();

    return 0;
}

