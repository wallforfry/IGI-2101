#include <stdio.h>
int main( )
{

  int a = 10;
  float b = 33.5;

  int *pa = &a;
  float *pb = &b;

  int **ppa = &pa;
  float **ppb = &pb;

  printf("pa : Direct : %p\nPointeur : %p\n", &a, pa);
  printf("pb : Direct : %p\nPointeur : %p\n", &b, pb);

  printf("Adresse de pa %p\n", &pa);
  printf("Adresse de pb %p\n", &pb);

  printf("ppa : Direct : %p\nPointeur : %p\n", &pa, ppa );
  printf("ppb : Direct : %p\nPointeur : %p\n", &pb, ppb );
  
  return 0 ;
}
