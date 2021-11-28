#include <fstream>
#include <iostream>

std::ifstream fin("numere.in");

int sub(int x)
{
    if (x <= 1)
        return 0;

    if (x % 2 == 0 and x != 2)
        return 0;

    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return 0;

    return 1;
}

int n, cn, a, b;

int v[100001];

int main()
{
    fin >> n;

    cn = n - 1;

    while (!sub(cn))
        cn--;

    a = cn;

    cn = n + 1;

    while (!sub(cn))
        cn++;

    b = cn;

    std::cout << a << ' ' << b;

    return 0;
}
