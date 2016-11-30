#include <stdio.h>

void Init_tab(int tableau[], int taille){
    int i = 0;
    for(i = 0; i < taille; i++){
      tableau[i] = i;
    }
}

void Affiche_tab(int tableau[], int taille){
  int i = 0;
  for(i=0; i< taille; i++){
    printf("%i ",tableau[i]);
  }
}

int main( )
{
  int tab[100];
  Init_tab(tab,100);

  int i;
  for(i = 2; i < 10; i++){
    int j = 2*i;
    while(j < 100){
      tab[j] = 0;
      j = j+i;
    }
  }
  
  Affiche_tab(tab,100);
  return 0 ;
}
