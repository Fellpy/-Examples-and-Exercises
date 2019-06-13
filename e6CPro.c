#include <stdio.h>

/* Exercicios C Progressivo

6. Quadrado - Escrever um programa que mostre a seguinte figura no alto da tela:

XXXXX
X   X
X   X
X   X
XXXXX
*/

int main()
{
	for (int i = 0; i <= 2; ++i)
	{
		if(i == 0)
			printf("XXXXX\n");
	printf("X   X\n");
		if (i == 2)
			printf("XXXXX\n");
	}

	return 0;
}