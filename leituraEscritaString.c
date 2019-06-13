#include <stdio.h>
#include <stdlib.h>

int main()
{
	// faz a leitura e exibe strings

	// declara as strings
	char string1[30];
	char string2[30];

	// limpa o buffer do teclado
	setbuf(stdin,NULL);

	printf("Digite os nomes completos seu e de alguem:\n");

	// faz a leitura das strings
	fgets(string1,30,stdin);
	fgets(string2,30,stdin);

	printf("\nNomes digitados:\n"); // pula uma linha

	// imprimi as strings
	fputs(string1,stdout);
	fputs(string2,stdout);

	//printf("\n"); // cria uma nova linha

	return 0;
}