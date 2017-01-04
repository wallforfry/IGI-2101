#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int CountWord(char* FileName)
{
   FILE* fichier;
   int count = 0;
   char word[50];

   fichier = fopen(FileName, "r");

   if(fichier != NULL){
     while(1){
       fscanf(fichier, "%s", word);
       if(feof(fichier)){
         break;
       }
       count++;
     }
     fclose(fichier);
     return count;
   }
   else {
     printf("Impossible d'ouvrir le fichier\n");
     return -1;
   }
 }

 int RandomN(int max)
 {
   static int initSeed = 0;

   if (initSeed == 0)
   {
      srand (time (NULL));
      initSeed = 1;
   }

   return rand() % (max + 1);
 }

 char * SearchWord (char* FileName, int position)
 {
   FILE* fichier;
   int count = 1;
   char word[50];

   char* tab = NULL;

   fichier = fopen(FileName, "r");

   if(fichier != NULL){
     while(1){
       fscanf(fichier, "%s", word);
       if(count == position){
         tab = malloc(strlen(word) * sizeof(char));
         strcpy(tab, word);
         break;
       }

       if(feof(fichier)){
         break;
       }
       count++;
     }
     fclose(fichier);
     return tab;
   }
   else {
     printf("Impossible d'ouvrir le fichier\n");
     return NULL;
   }
 }

 char * RandomWordInFile (char * FileName)
 {
   int range = CountWord(FileName);
   int random = RandomN(range);
   char * word = SearchWord(FileName, random);
   return word;
 }

 void draw(int number){
   switch (number){
     case 0:
        printf("/------\n");
        break;
     case 1:
        printf("/------\n|     |\n");
        break;
     case 2:
        printf("/------\n|     |\n|     Q\n");
        break;
     case 3:
        printf("/------\n|     |\n|     Q\n|    \\|/\n");
        break;
        break;
     case 4:
        printf("/------\n|     |\n|     Q\n|    \\|/\n|     |\n");
        break;
     case 5:
        printf("/------\n|     |\n|     Q\n|    \\|/\n|     |\n|    / \\ \n");
        break;
     case 6:
        printf("/------\n|     |\n|     Q\n|    \\|/\n|     |\n|    / \\ \n|_______\n");
        printf("\nGAME OVER\n");
        break;
   }
 }
