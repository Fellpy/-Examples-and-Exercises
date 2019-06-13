#include <stdio.h>

extern int vlr_a;
extern int vlr_b;

void imprime_soma(void)
{
	printf("Soma %d\n", (vlr_a + vlr_b));
}