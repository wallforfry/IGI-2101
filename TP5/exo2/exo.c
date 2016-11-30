#include <stdio.h>

int main( )
{
  unsigned short x = 0b0000111000101100;

  unsigned short poidsfort;
  unsigned short masque1 = 0b1111111100000000;

  int i = 0;
  for(i = 0; i < 16; i++){
    printf("%i : ", i);
      if(x & masque1){
        printf("1");
      }
      else {
        printf("0");
      }
      printf("\n");
      masque1 = masque1 >> 1;
  }

  return 0 ;
}
