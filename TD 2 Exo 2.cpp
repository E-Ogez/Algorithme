#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	int a, b, c;

	printf("Ecrire un nombre\n");
	scanf("%d", &a);
	printf("Ecrire un nombre\n");
	scanf("%d", &b);
	printf("Ecrire un nombre\n");
	scanf("%d", &c);
	
	if (c < b && c < a) {
		if (a < b)
			printf("%d %d %d", c, a, b);
	}
	if (c > b && c > a) {
		if (a > b)
			printf("%d %d %d", b, a, c);
	}
	if (c > b && c < a) {
		if (a > b)
			printf("%d %d %d", b, c, a);
	}
	if (c < b && c < a) {
		if (a > b)
			printf("%d %d %d", c, b, a);
	}
	if (c > b && c > a) {
		if (a < b)
			printf("%d %d %d", a, b, c);
	}
	if (c < b && c > a) {
		if (a < b)
			printf("%d %d %d", a, c, b);
	}
}

/*Ecrire un programme qui permet d’entrer 3 nombres entiers au clavier, puis les
affiche à l’écran dans l’ordre croissant.*/