#include <iostream>
#include <cstring>
using namespace std;

void elimincar(char s[], char c)
{
  char aux[256]="";
  int i;
  for(i = 0; i < strlen(s); ++i)
  {
    if(s[i] == c)
    {
      strcpy(aux, s + i + 1);
      strcpy(s + i, aux);
      i--;
    }
  }
}

char s[256], aux[256], voc[]="aeiou";

int main()
{
  cin >> s;
  
  for(int i = 0; i < 5; ++ i)
  {
    if(strchr(s, voc[i]))
    {
      strcpy(aux, s);
      elimincar(aux, voc[i]);
      cout << aux << endl;
        
    }
  }
}
