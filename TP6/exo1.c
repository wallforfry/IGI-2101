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
  bool work = true;

  if(argv[1] != NULL){

    fileName = strcat(argv[1],".txt");

    fichier = fopen(fileName, "r+");

    if(fichier != NULL){
      while(work == true){

        scanf("%s", name);

        if(strcmp(name, "FIN") != 0) {
          scanf("%s", surname);
          scanf("%d", &age);

          fputs(name, fichier);
          fprintf(fichier, " ");
          fputs(surname, fichier);
          fprintf(fichier, " ");
          fprintf(fichier, "%d", age);
          fprintf(fichier, "\n");
        }
        else{
          work = false;
        }
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
