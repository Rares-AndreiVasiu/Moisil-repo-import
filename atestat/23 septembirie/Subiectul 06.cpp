#include <fstream>
#include <iostream>
#include <string.h>

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

bool prime[100001];

int main()
{
    fin >> n;

    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; ++p)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p < n; ++p)
    {
        for (int k = p + 1; k <= n; ++k)
        {
            if (prime[p] and prime[k])
                if (p + k == n)
                    std::cout << p << ' ' << k << '\n';
        }
    }

    return 0;
}

#include <fstream>
#include <iostream>
#include <string.h>

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
int n, k, v[1000001];

int main()
{
    fin >> n;

    for (int i = 1; i <= n; ++i)
        if (sub(i))
            v[++k] = i;

    for (int i = 1; i < k; ++i)
        for (int j = i + 1; j <= k; ++j)
            if (v[i] + v[j] == n)
                std::cout << v[i] << ' ' << v[j] << '\n';

    return 0;
    fin.close();
}
