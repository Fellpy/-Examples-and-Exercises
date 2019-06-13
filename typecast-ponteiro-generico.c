#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// para acessar o conteúdo de um ponteiro genérico
	// temos que converte-lo antes para o tipo de ponteiro
	// com qual se desena trabalhar


	// ponteiro genérico
	void *pp;
	int p2 = 10;

	// ponteiro geneŕico recebe o endereço de um inteiro
	pp = &p2;
	// tenta acessar o conteúdo do ponteiro genérico
	printf("Conteudo do ponteiro genérico: %d\n",*pp); // ERRO
	// converte o ponteiro genérico pp para int (int *)
	// antes de acessar seu conteudo
	printf("Conteudo do ponteiro genérico convertido: %d\n", *(int *)pp); // CORRETO

	return 0;	
}