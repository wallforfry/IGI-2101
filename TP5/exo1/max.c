#include <stdio.h>

float min3float(float a, float b, float c){
  if(a <= b){
    if(c <= a){
      return c;
    }
    else {
      return a;
    }
  }
  else {
    if( b <= c ){
      return b;
    }
    else {
      return c;
    }
  }
}


int main( )
{
  float x1, x2, x3, res = 0.0;

  printf("Entrez trois float pour tester le plus petit :\n");
  printf("a : ");
  scanf("%f", &x1);
  printf("b : ");
  scanf("%f", &x2);
  printf("c : ");
  scanf("%f", &x3);

  res = min3float(x1, x2, x3);
  printf("Le minimum est : %f\n", res);
  return 0 ;
}
