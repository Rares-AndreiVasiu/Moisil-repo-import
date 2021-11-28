#include <iostream>
#include <cmath>
#include <fstream>

std::ifstream fin("numere.in");

int n;

int sub(int x)
{

    int a, b, c;

    a = 1;

    b = 1;

    while (b <= x)
    {
        c = a + b;

        a = b;

        b = c;
    }

    return a;
}

int main()
{
    fin >> n;

    while (n)
    {
        int x = sub(n);

        std::cout << x << ' ';

        n -= x;
    }

    fin.close();

    return 0;
}
