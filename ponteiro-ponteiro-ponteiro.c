#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// variavel inteira
	int x;

	// ponteiro para um inteiro(1 nivel)
	int *p1;

	// ponteiro(**p2) para ponteiro(*p1) de inteiro (2 níveis)
	int **p2;

	// ponteiro(***p3) para ponteiro(**p2) para ponteiro(*p)
	// de inteiro (3 níveis)
	int ***p3;

	printf("Ponteiros\n");
	return 0;
}