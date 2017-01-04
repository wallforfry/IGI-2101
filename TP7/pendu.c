#include "Myfonctions.h"
#include <stdio.h>
#include <string.h>

int main(){
  char name[]="francais.txt";
  int essai = 7;

  char* word = RandomWordInFile (name);
  printf("%s\n", word);
  int lenght = strlen(word);

  printf("Bienvenu dans le jeu du pendu :\n");
  printf("Vous devez trouver %i lettres\n", lenght);

  char test[50];


  int j;
  for(j = 0; j < essai; j++)
  {
    printf("Entrez le mot à tester : ");
    scanf("%s", &test);
    if(strcmp(test, word) == 0){
      printf("GAGNÉ\n");
      break;
    }
    int i;
    for(i = 0; i < strlen(test); i++)
    {
      if(test[i] == word[i]){
        printf("%c",word[i]);
      }
      else{
        printf("_");
      }
    }
    printf("\n\n");
    draw(j);
  }

  return 0;
}
