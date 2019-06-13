#include <stdio.h>
#include <stdlib.h>

// Vetores

#define TAMANHO 5

void main(void)
{

	int vlr_a;
	int soma;
	int vetor[TAMANHO];

	// um vetor sempre começa na posição 0
	for (int i = 0; i < TAMANHO; ++i)
	{
		printf("Entre com o valor %d: ", i + 1);
		scanf("%d", &vlr_a);
		vetor[i] = vlr_a;
	}

	soma = 0;
	for (int i = 0; i < TAMANHO; ++i)
	{
		soma += vetor[i];
	}
	printf("Media: %f\n", soma / (TAMANHO * 1.0));
}