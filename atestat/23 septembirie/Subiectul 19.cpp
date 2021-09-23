#include <iostream>
#include <fstream>

std::ifstream fin("numere.in");
std::ofstream fout("numere.out");

int ap[9999], x;

int main()
{
    while(fin >> x)
        ap[x]++;

    for(int i= 9999; i >= 1; -- i)
        if(!ap[i])
            fout << i << ' ';

    fin.close();
    fout.close();

    return 0;
}
