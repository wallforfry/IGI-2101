#include <stdio.h>
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

  int i = 0;
  for(i = 0; i < 5; i++)
  {
    printf("Nom : %s, Prenom : %s, age : %i, notes : ",ElevesTab[i].Nom, ElevesTab[i].Prenom, ElevesTab[i].age);

    int j = 0;
    for(j = 0; j < 4; j++)
    {
      printf("%i ", ElevesTab[i].note[j]);
    }
    printf("\n");
  }
  return 0 ;
}
