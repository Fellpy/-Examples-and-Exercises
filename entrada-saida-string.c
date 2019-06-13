#include <stdio.h>
#include <string.h>

void main(void)
{
	char nome[30];
	char frase[100];

	printf("Entre com uma frase: \n");

	// leitura e impressão de uma string
	gets(frase);
	puts(frase);

	printf("Entre com o seu nome: \n");
	scanf("%s\n",&nome); // so le os dados ate o primeira caracter em branco
	// ou até pressionar enter


	printf("Sr(a). %s seja bem vindo ao curso\n", nome);
}