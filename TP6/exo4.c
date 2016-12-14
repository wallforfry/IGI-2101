#include <stdio.h>
#include <string.h>

int MaxSizeInFile (char* FileName){
    FILE* fichier;

    char* fileNameTXT;
    fileNameTXT =  strcat(FileName,".txt");
    char mot[50];
    char motLong[50];
    int longueur = -1;

    fichier = fopen(fileNameTXT, "r");

    if(fichier != NULL){

      while(1){

        fscanf(fichier, "%s", mot);
        if(feof(fichier)){
          break;
        }

        int i;
        int tmp = 0;

        for(i = 0; mot[i] != 0; i++ ){
            if(mot[i] != ' '){
            tmp++;
          }
        }

        if(tmp > longueur){
          longueur = tmp;
          strcpy(motLong,mot);
        }
      }
      printf("%s\n", motLong);
      return longueur;
    }
    else {
      printf("Impossible d'ouvrir le fichier\n");
    }
    return -1;
}

int main(int argc, char* argv[]){
  printf("%d\n",MaxSizeInFile(argv[1]));
  return 0;
}
