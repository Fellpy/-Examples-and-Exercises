#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* laços de repetição aninhados
	sao úteis para percorrer um conjunto de valores
	ou uma matriz bidimensional de 4 x 4, onde o primeiro
	laço percorre as linhas e o segundo percorre as colunas
	*/

	// imprime um vetor bidimensional de 4 x 4
	int i , j;
	for(i = 1; i < 5; i++){
		for(j = 1; j < 5; j++){
			if (i == j)
				printf("1 ");
			else 
				printf("0 ");
		}
		printf("\n");
	}

	return 0;
}