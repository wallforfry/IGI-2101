#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]){

  FILE* fichier;
  char* fileName;

  char name[50] = {};
  char surname[50] = {};
  int age;

  if(argv[1] != NULL){

    fileName = strcat(argv[1],".txt");

    fichier = fopen(fileName, "r");

    if(fichier != NULL){

      while(1){

        fscanf(fichier, "%s %s %d", name, surname, &age);
        if(feof(fichier)){
          break;
        }
        printf("Nom : %s Prénom : %s Age : %d\n", name, surname, age);
      }
    }
    else {
      printf("Impossible d'ouvrir le fichier\n");
    }

    fclose(fichier);
  }
  else {

    exit(EXIT_FAILURE);
  }

  return 0;
}
