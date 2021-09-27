#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	int a, b, total2;
	total2 = 0;
	int z = 0; /*while*/

	printf("Ecrire un nombre\n");
	scanf("%d", &a);
	printf("Ecrire un nombre\n");
	scanf("%d", &b);

	/*for (z = 0; z < b; z++) {
		total2 = total2 + a;
	}*/
	while (z < b) {
		total2 = total2 + a;
		z = z + 1;
	}
		printf("%d",total2);

}

/*Ecrire un programme qui calcule le produit de 2 nombres a et b, sans utiliser
l’opération de multiplication.*/
