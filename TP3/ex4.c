#include <stdio.h>
#include <string.h>

int main(){

char tab1[]="ceci";
char tab2[]=" est un test";
char tab[30];

strcpy(tab, tab1);
strcat(tab,tab2);


printf("%s\n", tab);
  return 0;
}
