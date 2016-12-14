#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]){

  FILE* fichier;
  char* fileName;

  int charac;

  if(argv[1] != NULL){

    fileName = strcat(argv[1],".txt");

    fichier = fopen(fileName, "r");

    if(fichier != NULL){

      while(1){

        charac = fgetc(fichier);
        if(charac == EOF){
          break;
        }
        printf("caratere : %c code ascii : %d\n", charac, charac);
      }
    }
    else {
      printf("Impossible de créer le fichier\n");
    }

    fclose(fichier);
  }
  else {

    exit(EXIT_FAILURE);
  }

  return 0;
}
