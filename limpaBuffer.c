#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Para possiveis erros que podem aontecer
	na leitura de strings ou de caracteres do teclado
	podemos limpar o buffer do teclado com a função
	setbuf()
	*/

	// leitura de caracteres
	char ch;
	setbuf(stdin,NULL); // limpando o buffer do teclado
	scanf("%c",&ch);

	return 0;
}