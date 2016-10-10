#include <stdio.h>
int main( ) {

  char  aChar = 'A';
  unsigned char aUChar = 'A';
  short aShort = -10000;
  unsigned short  aUShort = 10000;
  int aInt = -12000;
  unsigned int aUInt = 12000;
  long  aLong = 20000;
  long long aLongLong = 300000;
  float aFloat = 3.5;
  double  aDouble = -2.5;

printf("aChar : %d, size : %lu octets, %lu bits, adresse : %p\n",aChar, sizeof(aChar), 8*sizeof(aChar), &aChar );
printf("aUChar : %u, size : %lu octets, %lu bits, adresse : %p\n",aUChar, sizeof(aUChar), 8*sizeof(aUChar), &aUChar );
printf("aShort : %d, size : %lu octets, %lu bits, adresse : %p\n",aShort, sizeof(aShort), 8*sizeof(aShort), &aShort );
printf("aUShort : %u, size : %lu octets, %lu bits, adresse : %p\n",aUShort, sizeof(aUShort), 8*sizeof(aUShort), &aUShort );
printf("aInt : %d, size : %lu octets, %lu bits, adresse : %p\n",aInt, sizeof(aInt), 8*sizeof(aInt), &aInt );
printf("aUInt : %u, size : %lu octets, %lu bits, adresse : %p\n",aUInt, sizeof(aUInt), 8*sizeof(aUInt), &aUInt );
printf("aLong : %ld, size : %lu octets, %lu bits, adresse : %p\n",aLong, sizeof(aLong), 8*sizeof(aLong), &aLong );
printf("aLongLong : %lld, size : %lu octets, %lu bits, adresse : %p\n",aLongLong, sizeof(aLongLong), 8*sizeof(aLongLong), &aLongLong );
printf("aFloat : %f, size : %lu octets, %lu bits, adresse : %p\n",aFloat, sizeof(aFloat), 8*sizeof(aFloat), &aFloat );
printf("aDouble : %f, size : %lu octets, %lu bits, adresse : %p\n",aDouble, sizeof(aDouble), 8*sizeof(aDouble), &aDouble );

 return 0 ;
}
