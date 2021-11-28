#include <iostream>
#include <fstream>

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
            flag = true;

            std::cout << x << ' ';
        }
    }

    fin.close();

    return 0;
}
