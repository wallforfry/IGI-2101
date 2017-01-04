#include "Myfonctions.h"
#include <stdio.h>

int main(){
  char name[]="francais.txt";

  int range = CountWord(name);
  int random = RandomN(range);
  char * word = SearchWord(name, random);
  printf("%s\n", word);

  return 0;
}
