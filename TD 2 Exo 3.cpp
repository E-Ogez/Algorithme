#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n, total;
	total = 0;

		printf("Ecrire votre nombre de gramme\n");
	scanf("%d", &n);

		if (n <= 20)
			printf("Vous devais payer: 3.00frs");

		if (n >= 20 && n < 50)
			printf("Vous devais payer: 3.95frs");

		if (n >= 50)
			printf("Vous devais payer: 5.90frs");
}




/*Les tarifs d’affranchissement d’une lettre sont les suivants :
En dessous de 20 g : 3.00 frs
A partir de 20 g et endessous de 50 g : 3.95 frs
A partir de 50 g : 5.90 frs
Ecrire le programme qui délivre le tarif pour un poids(donné au clavier).*/
