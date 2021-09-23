#include <iostream>

int sub(int x)
{
    int p, cx, nrnou;

    p = 1;
    cx = x;
    nrnou = 0;

    while(cx > 9)
    {
        p *= 10;

        cx /= 10;
    }

    nrnou = x % p * 10 + cx;

    return nrnou;
}

int x, nr;

int main()
{
    std::cin >> x;

    nr = sub(x);

    while(nr != x)
    {
        std::cout << nr << ' ';
        nr = sub(nr);
    }

    return 0;
}
