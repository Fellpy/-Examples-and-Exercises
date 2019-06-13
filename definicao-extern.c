#include <stdio.h>
#include "definicao-extern-2.c"
// protótipo da função
void imprime_soma(void);

// variaveis globais
int vlr_a;
int vlr_b;

void main(void)
{
	int resultado;

	printf("Entre com os valores: ");
	scanf("%d %d", &vlr_a, &vlr_a);
	imprime_soma();
}