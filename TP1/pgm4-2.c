#include<stdio.h>
int main ( ) {
 int n=1;
 for(n; n <= 80; n++){
   for (int j = 0; j < n; j++){
     for (int i = 0; i < n; i++){
      printf("*");
    }
    printf("\n");
   }
 }
 return 0;
}
