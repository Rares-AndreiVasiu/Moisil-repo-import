#include <iostream>
#include <fstream>

std::ifstream fin("DATE.TXT");

int a[5001], b[5001];
int n, m, ct;

int main()
{
    int poz = 1;

    fin >> n >> m;

    for(int i = 1; i <= n; ++ i)
        fin >> a[i];

    for(int i = 1; i <= m; ++ i)
    {
        fin >> b[i];

        while(poz <= n)
        {
            if(a[poz] == b[i])
            {
                ct++;
                break;
            }
            else
                poz++;
        }
    }

    if(ct == m)
        std::cout << "b se poate obtine din a";
    else
        std::cout << "b nu se poate obtine din a";
    fin.close();

    return 0;

}
