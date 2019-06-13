#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* uso da função fgets()
	para a leitura de string do teclado
	ou outro dispositivo de entrada padrao.

	a função fgets() faz a leitura de uma string
	com o sue espaço incluído, sendo possivel
	ler grandes string/frases contendo os espaços.
	
	Logo em seguida a string lida é exibida.
	*/

	char nome[30];

	printf("Digite um nome: ");
	fgets(nome,30,stdin);
	printf("O nome digitado foi: %s",nome);

	return 0;
}