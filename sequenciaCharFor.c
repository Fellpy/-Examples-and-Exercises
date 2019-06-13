#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* usa o lçao for para imprimir 
	uma sequencia de caracteres com uma 
	variável do tipo char.

	Imprime o alfabeto de A até Z
	*/
	char c;
	for(c = 'A'; c <= 'Z'; c++){
		printf("Letra = %c\n",c);
	}

	return 0;
}