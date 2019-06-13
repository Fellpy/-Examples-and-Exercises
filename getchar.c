#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* a função getchar() le um unico caracter e retorna
	o caracter lido(%c) e seu codigo ASCII(%d).
	*/
	char c; // variavel do tipo char, que será convertida em int pela função getchar()
	c = getchar();// faz a leitura do caracter e o converte para int
	printf("Caractere: %c\n",c);
	printf("Codigo ASCII: %d\n",c);

	return 0;
}