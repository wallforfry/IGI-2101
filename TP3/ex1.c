#include <stdio.h>
int main( )
{

  // int Notes[]={8,11,14,7,17};
  short Notes[] = {8,10,12};

  // long unsigned int nbElements = sizeof(Notes)/4; //Si on utilise un tableau de int
  long unsigned int nbElements = sizeof(Notes)/2; //Si on utilise un tableau de short

  float moyenne = 0;
  
  printf("Taille du tableau : %lu Octets\n", sizeof(Notes));
  printf("Il y a %lu éléments\n", nbElements);

  for(unsigned int i = 0; i < nbElements; i++)
  {
    moyenne = moyenne+Notes[i];
  }
  moyenne = moyenne / nbElements;

  printf("La moyenne est : %f\n", moyenne);

//printf("aChar : %d, size : %lu octets, %lu bits, adresse : %p\n",aChar, sizeof(aChar), 8*sizeof(aChar), &aChar );
  return 0 ;
}
