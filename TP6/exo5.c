#include <stdio.h>
#include <string.h>

void Histogram (char* FileName, int Tab[]){
    FILE* fichier;

    char* fileNameTXT;
    fileNameTXT =  strcat(FileName,".txt");
    char mot[50];

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
        Tab[0]++;
        Tab[i]++;
      }
    }
    else {
      printf("Impossible d'ouvrir le fichier\n");
    }
}

int main(int argc, char* argv[]){
  int tab[27] = {};
  Histogram(argv[1], tab);

  int j;
  printf("Total : %d\n", tab[0]);
  for(j = 1; j < 27; j++){
    printf("%d lettres : %d\n",j , tab[j]);
  }
  return 0;
}
