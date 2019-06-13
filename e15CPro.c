#include <stdio.h>

/* Exercicios C Progressivo

3 - Faça o programa do exame de próstata usando o operador >
*/

int main(void)
{
	int idade;

	printf("Informe a sua idade: ");
	scanf("%d",&idade);

	if(idade > 44)
	{
		printf("Voce precisa fazer o exame de prostata!\n");
	}
	else 
	{
		printf("Voce nao precisa fazer o exame de prostata!\n");
	}

	return 0;
}