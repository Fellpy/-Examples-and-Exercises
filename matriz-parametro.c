#include <stdio.h>

void imprime_1(int vet[]) // Não é preciso informar o tamanho do indice
{
	printf("Primeira matriz\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", vet[i]);
	}
	printf("\n\n");
}

/* Para a primeira dimensão da matriz não é nescessário informar
a quantidade de elementos, ja para as mais dimensões é nescessário
*/
void imprime_2(int mat[][3])
{
	printf("Segunda matriz\n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d\n", mat[i][j]);
		}
		printf("\n");
	}
}

void main(void)
{
	int matriz1[5] = {1,2,3,4,5};
	int matriz2[3][3] = 
						{ {11,12,13,},
						  {21,22,23},
						  {31,32,33}  };

	imprime_1(matriz1);
	imprime_2(matriz2);
}