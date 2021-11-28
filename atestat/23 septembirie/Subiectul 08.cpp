#include <fstream>
#include <iostream>
#include <algorithm>

std::ifstream fin("numere.in");

int sub(int x)
{
    int ultima = x % 10;

    while (x >= 10)
        x /= 10;

    return x == ultima;
}

int n, v[101];

int main()
{
    fin >> n;

    for (int i = 1; i <= n; ++i)
        fin >> v[i];

    std::sort(v + 1, v + n + 1);

    for (int i = 1; i <= n; ++i)
        if (sub(v[i]))
            std::cout << v[i] << ' ';

    return 0;
}
