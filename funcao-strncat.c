#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[80], s2[80];
	unsigned int tam;
	printf("Entre com uma frase:\n");
	gets(s1);
	printf("Entre com outra frase:\n");
	gets(s2);

	// calculo para garantir que a string
	// não tenha o seu tamanho ultrapassado
	// o resultado desse calculo será a quantidade
	// de caracteres que podem ser copiados para s2
	// para que nao haja estouro do buffer
	tam = 79 - strlen(s2);

	strncat(s2,s1,tam);

	printf("%s\n", s2);

	return 0;
}