#include <stdio.h>

/* Exercicios C Progressivo

2 - Faça o programa do exame de próstata usando o operador <

Crie um aplicativo em C que pergunte a idade do 
usuário e diga se ele tem que fazer ou não o exame de próstata.
*/

int main(void)
{
	int idade;

	printf("Informe a sua idade: ");
	scanf("%d",&idade);

	if (idade < 45)
	{
		printf("Voce nao precisa fazer o exame de prostata, ainda!\n");
	}
	else 
	{
		printf("Voce precisa fazer o exame de prostata!\n");
	}

	return 0;
}