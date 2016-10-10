#include <stdio.h>
#include <string.h>

int main(){

char tab1[]="ceci";
char tab2[]=" est un test";
char tab[30];


unsigned int i = 0;
unsigned int j = 0;
char stop = '\0';


printf("%s %s %s\n", tab1, tab2, tab);

while(tab1[i] != stop)
{
  tab[i] = tab1[i];
  i++;
}

while(tab2[j] != stop)
{
  tab[i] = tab2[j];
  j++;
  i++;
}

printf("%s\n", tab);
  return 0;
}
