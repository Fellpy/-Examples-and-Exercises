#include <stdio.h>

#define TAM 2

void main(void)
{
	int determ;
	int vlr_a;
	int matriz[TAM][TAM];


	for (int i = 0; i < TAM; ++i)
		for (int j = 0; j < TAM; ++j)
		{
			printf("Entre item %d %d\n", i + 1, j + 1);
			scanf("%d", &vlr_a);
			matriz[i][j] = vlr_a;
		}


	determ = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
	printf("Determinante: %d\n", determ);
}