#include <stdio.h>
#include <stdlib.h>

// calloc() inicializa todos os BITS do espaço alocado com ZERO

int main(void)
{
	int i;
	int *p, *p1;
	p = (int *) malloc(5 * sizeof(int));
	p1 = (int *) calloc(5, sizeof(int));

	printf("calloc \t\t malloc\n");
	for (i = 0; i < 5; ++i)
	{
		printf("p1[%d] = %d \t p[%d] = %d\n", i, p1[i], i, p[i]);
	}

	return 0;
}