#include<stdio.h>
int main ( ) {
 int n=7,m=1;
   for (int i = 0; i < n; i++){
     for (int z = n/2; z > m; z--){
       printf(" ");
     }
     for (int j = 0; j < m; j++){
       printf("*");
     }
     if(i < n/2){
       m++;
     }
     else{
       m--;
     }
    printf("\n");
  }
 return 0;
}
