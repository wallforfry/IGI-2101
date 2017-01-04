#include "Myfonctions.h"
#include <stdio.h>

int main(){
  char name[]="francais.txt";
  char * word = SearchWord(name, 7);
  printf("%s\n", word);

  return 0;
}
