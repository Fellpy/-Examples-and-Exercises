#include <stdio.h>
#include <stdlib.h>

int main()
{
	// soma os elementos de um vetor de 5 inteiros

	int i, lista[5] = {3,51,18,2,54};
	int soma = 0;
	
	for (i = 0; i < 5; ++i)
	{
		soma += lista[i];
		printf("Soma = %d\n",soma);
	}

	return 0;
}