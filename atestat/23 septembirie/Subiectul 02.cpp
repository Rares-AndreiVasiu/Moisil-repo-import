#include <iostream>
#include <fstream>
#include <cmath>

std::ifstream fin("numere.in");

bool isPerfectSquare(int x)
{
    int s = std::sqrt(x);

    return (s * s == x);
}

int sub(int x)
{
    return isPerfectSquare(5 * x * x + 4) or isPerfectSquare(5 * x * x - 4);
}

int n;

bool flag;

int main()
{
    fin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int x;

        fin >> x;

        if (sub(x))
        {
            std::cout << x << ' ';

            flag = true;
        }
    }

    if (!flag)
        std::cout << "NU EXISTA";

    fin.close();

    return 0;
}
