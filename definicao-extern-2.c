#include <stdio.h>
/* declara que as variaveis existem em outro programa
e estão disponíveis para uso em todo programa */
extern int vlr_a;
extern int vlr_b;

void imprime_soma(void)
{
	printf("Soma: %d\n", vlr_a + vlr_b);
}