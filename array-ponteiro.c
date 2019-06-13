#include <stdio.h>
#include <stdlib.h>

/*
Cada posição de um array de ponteiros pode armazenar o
endereço de uma variável ou o endereço da posição inicial
de um outro array.
*/

int main(void)
{
	int *pvet[2];
	int x = 10, y[2] = {20,30};
	int *u;

	pvet[0] = &x;
	pvet[1] = y;

	// imprime os endereços das variaveis
	printf("Endereço pvet[0] = %p\n", pvet[0]);
	printf("Endereço pvet[1] = %p\n", pvet[1]);

	// imprime o conteúdo de uma variavel
	printf("Conteúdo em pvet[0] = %d\n", *pvet[0]);

	// imprime uma posição do vetor
	printf("Conteúdo pvet[1][1] = %d\n", pvet[1][1]);
	return 0;
}