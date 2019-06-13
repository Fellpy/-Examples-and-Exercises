#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p, *p1, x, y;
	p = &x;
	p1 = &y;

	//  compara o endereço dos ponteiros
	// dois ponteiros são considerados iguais se apontarem para o
	// mesma posição de memória
	if (p == p1)
	{
		printf("Ponteiros iguais!\n");
	}
	else
	{
		printf("Ponteiros diferentes!\n");
	}

	return 0;
}