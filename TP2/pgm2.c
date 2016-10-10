#include <stdio.h>
int main( ) {
  int x = 65000;
  char y = 0;

  printf("x = %d décimal = 0x%08x hexadécimal\n", x, x);
  printf("y = %d décimal = 0x%08x hexadécimal\n", y, y);

  y=x;
  printf("y = %d décimal = 0x%08x hexadécimal\n", y, y);

  return 0 ;
}
