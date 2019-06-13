#include <stdio.h>
#include <stdlib.h>

/*
No momento da alocação da memória, deve-se levar em
conta o tamanho do dado alocado.
*/

int main(void)
{
	char *p;

	// aloca espaço para 1000 chars 
	p = (char *) malloc(1000);

	int *i;

	// aloca espaço para 250 inteiros
	i = (int *) malloc(1000);

	return 0;
}