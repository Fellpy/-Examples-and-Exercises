#include <stdio.h>
#include <string.h>

int main(void)
{
	char backup[40];
	char nome[40];

	printf("Entre com o seu nome: ");
	gets(nome);

	// faz a copia de nome para backup
	strcpy(backup, nome);
	puts(backup);

	return 0;
}