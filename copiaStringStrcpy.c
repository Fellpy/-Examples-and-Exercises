#include <stdio.h>
#include <stdlib.h>
#include <string.h> // lib nescessária para usar a função strcpy()

int main()
{
	/* a função strcpy() tem a finalidade de copiar
	uma sequencia de caracteres(strings)
	para outra sequencia de caracteres.
	*/

	char str1[100], str2[100];
	printf("Entre com uma string\n");

	// lendo a string
	fgets(str1,100,stdin);

	// copiando o conteudo da str1 para a str2
	strcpy(str2,str1);

	// imprimi str2
	printf("\nConteúdo copiado:\n");
	fputs(str2,stdout);

	return 0;
}