#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

ifstream fin("date.in");

ofstream fout("date.out");

int prim(int x)
{
    int i, ok = 1;

    if(x < 2 || x % 2 == 0)
        ok = 0;

    for(i = 3; i <= sqrt(x); i += 2)
        if(x % i == 0)
            ok = 0;

    return ok;
}

void sortare(int n,int v[100])
{
    int i, aux, j;

    for(i = 0; i < n - 1; i ++)
        for(j = i + 1; j < n; j ++)
            if(v[i] > v[j])
                swap(v[i], v[j]);
}

int n, v[100], i, ok,c;

int main()
{

    while(fin>>c)
    {
        v[n]=c;

        n++;
    }
    sortare(n,v);

    for(i=0; i<n; i++)
    {
        if(prim(v[i]))
        {
            fout<<v[i]<<" ";
            break;
        }
        else
            ok++;
    }

    if(ok==n)
        fout<<"NU EXISTA";
    else
        for(i=n-1; i>=0; i--)
            if(prim(v[i]))
            {
                fout<<v[i];
                break;
            }

    return 0;
}
