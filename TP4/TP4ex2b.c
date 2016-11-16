#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( )
{
  struct eleve{
    char Nom[30];
    char Prenom[30];
    int age;
    int note[4];
  };

  struct eleve ElevesTab[5] = {{"durand", "leon", 20, {11,13,18,0}}, {"lake", "lea", 24, {16,17,19,12}}, {"pouce", "tom", 26, {11,12,0,0}}, {"Dinoso", "tony", 19, {15,15,15,0}}, {"skywalker", "luc", 23, {11,11,10,0}}};

  struct eleve ElevesTabTri[5];

  //affichage
  int i;
  for(i = 0; i < 5; i++)
  {
    printf("%s %s, age : %i, notes : ",ElevesTab[i].Prenom, ElevesTab[i].Nom, ElevesTab[i].age);

    int j;
    for(j = 0; j < 4; j++)
    {
      printf("%i ", ElevesTab[i].note[j]);
    }
    printf("\n");
  }

  //transfert
  for(i = 0; i < 5; i++)
  {
    ElevesTabTri[i] = ElevesTab[i];
  }
  printf("\nTableau trié : \n");

  //tri
  for(i = 0; i < 5; i++)
  {
      int j;
      for(j = i+1; j < 5; j++)
          if(strcmp((ElevesTabTri[i].Prenom),(ElevesTabTri[j].Prenom)) > 0)
          {
              struct eleve temp = ElevesTabTri[i];
              ElevesTabTri[i] = ElevesTabTri[j];
              ElevesTabTri[j] = temp;
          }
  }

  //affichage
  i=0;
  for(i = 0; i < 5; i++)
  {
    printf("%s %s, age : %i, notes : ",ElevesTabTri[i].Prenom, ElevesTabTri[i].Nom, ElevesTabTri[i].age);

    int j;
    for(j = 0; j < 4; j++)
    {
      printf("%i ", ElevesTabTri[i].note[j]);
    }
    printf("\n");
  }

  return 0 ;
}
