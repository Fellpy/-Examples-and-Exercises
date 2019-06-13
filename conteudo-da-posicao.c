#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Declara uma variavel int contendo o valor 10
	int count = 10;

	// Declara um ponteiro para int
	int *p;
	
	int y = *p; // y recebe o endereço de memória de count

	// Atribui ao ponteiro o endereço da variavel count
	p = &count;

	printf("Conteudo apontado por p: %d\n",*p);

	// Atribui um novo valor á posição de memória apontada por p
	*p = 12;
	printf("Conteudo apontado por p: %d\n",*p);
	printf("Conteudo de count: %d\n", count);
	printf("%d\n",y);
	return 0;
}