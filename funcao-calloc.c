#include <stdio.h>
#include <stdlib.h>

/*
A função malloc(unsigned int num, unsigned int size) tem o mesmo
propósito da função malloc(): Reservar espaço de memória dinamicamente.

A diferença de calloc() é poder especificar separadamente quantos elementos
do array queremos alocar e qual o tamanho.

Outra diferença de calloc é inicializar todos os BITS do espaço alocado
com ZERO
*/

int main(void)
{
	// malloc() VS calloc()

	// Alocação com malloc
	int *p;
	p = (int *) malloc(50 * sizeof(int));
	if (p == NULL)
	{
		printf("Erro: Memória insuficiente!\n");
	}
	printf("Tamanho do array alocado por malloc: %d\n", sizeof(p[9]));


	// Alocação com calloc
	int *p1;
	p1 = (int *) calloc(50,sizeof(int));
	if (p1 == NULL)
	{
		printf("Erro: Memória insuficiente!\n");
	}
	printf("Tamanho do array alocado por calloc: %d\n", sizeof(p1));

	return 0;
}