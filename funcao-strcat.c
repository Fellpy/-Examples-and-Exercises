#include <stdio.h>
#include <string.h>

int main(void)
{
	char mensagem[100] = "Sr(a). ";
	char nome[40];

	printf("Entre com o seu nome: \n");
	gets(nome);


	// concatena nome a mensagem
	strcat(mensagem, nome);
	strcat(mensagem, ". Bem-vindo ao curso");
	puts(mensagem);

	return 0;
}