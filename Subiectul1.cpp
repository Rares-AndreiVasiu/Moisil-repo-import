#include <iostream>
#include <fstream>
#include <cstring>

std::ifstream fin("date.in");

bool S1(char s[21])
{
    int lenght = std::strlen(s);

    for(int i = 0; i < lenght / 2; ++ i)
        if(s[i] != s[lenght - i - 1])
            return false;

    return true;
}
int n;

char s[21];

bool flag;

int main()
{
    fin >> n;

    for(int i = 1; i <= n; ++ i)
    {
        fin >> s;

        if(S1(s))
        {
            std::cout << s << '\n';

            flag = true;
        }
    }

    if(!flag)
        std::cout << "NU EXISTA";

    fin.close();

    return 0;
}
