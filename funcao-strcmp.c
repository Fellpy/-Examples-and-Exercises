#include <stdio.h>
#include <string.h>

int main(void)
{
	char nome[80];
	int tamanho;

	while(1)
	{
		printf("Entre com nomes(fim p/ terminar): ");
		gets(nome);

		// verifica e faz a comparacao se nome é igual a fim
		if(strcmp(nome, "fim") == 0)
			break;
		tamanho = strlen(nome);
		printf("Nome com %d caracteres\n", tamanho);
	}

	return 0;
}