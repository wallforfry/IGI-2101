#include <stdio.h>
int main(){
  long long int i = 0;
  long long int x = 15;
  long long int y = 1;
  long long int z = 1;

 while(i<15){

    i++ ;
    x=i;
    y=1;
    z=i;

    while(x>1){
		y=y*x*(x-1);
		x--;
		x--;

}

printf("%lld! = %lld \n",z,y);

}

return 0;
}
