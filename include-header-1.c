#include <stdio.h>
#include "include-header-3-soma.h"
#include "include-header-2.c"

// Programa principal

int vlr_a;
int vlr_b;

void main(void)
{
	int resultado;

	printf("Entre com os valores: ");
	scanf("%d %d", &vlr_a, &vlr_b);
	imprime_soma();
}