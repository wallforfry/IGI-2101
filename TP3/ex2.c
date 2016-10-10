#include <stdio.h>
#include <string.h>

int main()
{
  char chaine1[50] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  printf("Chaine sous forme de string : %s\n", chaine1);

  printf("Dernier élément affichable de la chaine %c\n", chaine1[25]);

  printf("Taille de chaine1 : %lu octets\n", sizeof(chaine1) );

  printf("Taille de la chaine : %lu\n", strlen(chaine1));

  for(unsigned int i = 0; i < strlen(chaine1); i++)
  {
    printf("%c\n", chaine1[i]);
  }
  return 0;
}
