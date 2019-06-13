#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Encontra o maior valor contido em um vetor de 5 inteiros

	int i, lista[5] = {3,18,2,51,45};
	int maior = lista[0];

	for (i = 0; i < 5; ++i)
	{
		if(maior < lista[i])
			maior = lista[i];
	}

	printf("Maior = %d\n",maior);

	return 0;
}