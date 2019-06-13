#include <stdio.h>
#include <string.h>

/*
A função strstr devolve um ponteiro para a primeira ocorrência da string
apontada por endereçoStr2 na string apontada por endereçoStr1 . Ela devolve
um ponteiro nulo se não for encontrada nenhuma coincidência.
*/

int main(void)
{

	char *p;
	char frase[] = "isto é um teste";
	char *pt_char;

	pt_char = frase;

	printf("Endereço inicial = %p - %p\n", pt_char, &frase);

	// a função retorna um ponteiro(endereço)
	// correspondente a localização do parametro "to"
	/* Verifica se a existencia da string "to" na string frase,
	se houver, a função retorna o endereço(ponteiro) de onde esta
	localizado a string "to" na string frase */
	p = strstr(frase, "to");

	pt_char = p;

	printf("Endereço inicial para a pesquisa = %p\n", pt_char);

	return 0;
}