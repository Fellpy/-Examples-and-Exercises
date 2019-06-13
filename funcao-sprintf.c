#include <stdio.h>
#include <string.h>

/*
A função sprintf tem a mesma funcionalidade da função printf , exceto que
a saída resultante, após a execução dos formatos, será colocada na variável in-
dicada como primeiro parâmetro.
*/

int main(void)
{
	char nome[30];
	char mensagem[100];

	printf("Entre com o seu nome:\n");
	gets(nome);

	sprintf(mensagem,"Sr(a). %s seja bem vindo ao curso",nome);
	puts(mensagem);

	return 0;
}