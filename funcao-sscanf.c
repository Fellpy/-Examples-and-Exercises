#include <stdio.h>

/*
A função sscanf é idêntica à função scanf , mas os dados são lidos da string. O
valor devolvido é igual ao número de variáveis, às quais foram realmente atri-
buídos valores. Esse número não inclui variáveis que foram saltadas devido ao
uso do especificador de formato * . Um valor zero significa que nenhum campo
foi atribuído; EOF indica que ocorreu um erro antes da primeira atribuição.
*/


int main(void)
{
	char str[80];
	int i;

	sscanf("Alo 1 2 3 4 5", "%s%d", str, &i);
	printf("%s %d\n",str, i);

	return 0;
}