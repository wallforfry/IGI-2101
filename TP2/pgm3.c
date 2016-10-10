#include <stdio.h>
int main( ) {
  for(char i = 'A'; i <= 'Z' ; i++){
    printf("%c ASCII : %d = 0x%04x\n", i, i, i);
  }

  printf("\n");

  for(char i = 'a'; i <= 'z' ; i++){
    printf("%c ASCII : %d = 0x%04x\n", i, i, i);
  }
  return 0 ;
}
