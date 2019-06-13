#include <stdio.h>

/* Exercicios C Progressivo


1. Programa em C que mostra os números ímpares
Escreva um aplicativo em C mostra todos os números ímpares de 1 até 100.
*/

int main(void)
{
	int num = 1;

	while(num <= 100)
	{
		if (num % 2 == 1)
		{
			printf("%d\n",num);
		}

		num++;
	}

	return 0;
}