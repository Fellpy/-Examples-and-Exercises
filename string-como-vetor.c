#include <stdio.h>
#include <string.h>

void main(void)
{
	char nome[40];

	printf("Entre com o seu nome: ");
	gets(nome);

	printf("Nome digitado\n");
	// o tratamento de uma string pode ser feito igual a de um vetor qualquer
	for (int i = 0; i < strlen(nome); ++i)
	{
		putchar(nome[i]);
	}
	printf("\n");
}