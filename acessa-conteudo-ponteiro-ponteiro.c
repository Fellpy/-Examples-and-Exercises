#include <stdio.h>
#include <stdlib.h>

// Acessando o conteúdo de um ponteiro para ponteiro.

int main(void)
{
	char letra = 'a';
	
	char *ptrChar = &letra;
	
	char **ptrPtrChar = &ptrChar;

	char ***ptrPtr = &ptrPtrChar;

	printf("Conteudo em ptrChar = %c\n", *ptrChar);

	printf("Conteudo em ptrPtrChar = %c\n", **ptrPtrChar);

	printf("Conteudo em ptrPtr = %c\n", ***ptrPtr);

	return 0;
}