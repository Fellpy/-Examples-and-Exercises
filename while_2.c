#include "stdio.h"

/* Programa em C que conta de 10 até 1, usando o laço while */

int main(void)
{

	int numero = 10;

	while(numero >= 1)
	{
		printf("%d\n",numero);
			numero--;
	}

	return 0;
}