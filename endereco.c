#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{

	// Declara uma variavel int contendo o valor 10
	int count = 10;

	// Declara um ponteiro para int
	int *p;

	// Atribui ao ponteiro o endereço da variavel count
	p = &count;

	printf("%d\n",count);
	return 0;
}