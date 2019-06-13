#include <stdio.h>

/* Exercicios C Progressivo

2. Programa em C que mostra os números pares
Escreva um aplicativo em C mostra todos os números pares de 1 até 100.
*/

int main(void)
{
	int num = 1;

	while(num <= 100)
	{
		if (num % 2 == 0)
		{
			printf("%d\n",num);
		}

		num++;
	}

	return 0;
}