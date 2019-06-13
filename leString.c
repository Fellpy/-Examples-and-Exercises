#include <stdio.h>
#include <stdlib.h>

int main()
{
	// le uma string com espaços e apresenta pro usuario

	char palavra[100]; // 99

	printf("Digite uma palavra/frase qualquer: ");
	fgets(palavra,100,stdin);

	fputs(palavra,stdout);

	return 0;
}