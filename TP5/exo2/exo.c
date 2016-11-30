#include <stdio.h>

void affiche_bin(unsigned short int x)
{
	unsigned short int mask = 0b1000000000000000;
	int i;
	for (i=0; i<16; i++)
	{
		printf("%d", (mask & x)>>(15-i));
		mask = mask>>1;
	}
}

int main()
{
	unsigned short int x = 0b0000111000101100;
	unsigned short int masque1 = 0b1111111100000000;
	unsigned short int masque2 = 0b0000000011111111;

	unsigned short int poidsfort = (x & masque1) >> 8;
	unsigned short int poidsfaible = (x & masque2);

	printf("Poids Fort : %d = %x = ", poidsfort, poidsfort);
	affiche_bin(poidsfort);

	printf("\nPoids Faible : %d = %x = ", poidsfaible, poidsfaible);
	affiche_bin(poidsfaible);

  printf("\n");
	return 0;
}
