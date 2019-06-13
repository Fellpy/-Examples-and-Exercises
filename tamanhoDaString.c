#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca nescessaria para usar a função srtlen()

int main()
{
	/* usando a função strlen()
	que retorna o tamanho da string.

	strlen() retorna o tamanho da string até o elemento "\0",
	e não o tamanho do array declarado para a string
	*/

	char str[15] = "teste";
	char string[50] = {"felipe vieira pontes"};
	char string1[90]  = {"Marcos camargo oliveira santos cruz de almeida mendes"};

	printf("Tamanho da string1: %d\n",strlen(string1));
	printf("Tamanho da string: %d\n",strlen(string));
	printf("Tamanho de str: %d\n",strlen(str));

	return 0;
}