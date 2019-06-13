#include <stdio.h>

/*
Crie um aplicativo em C que pergunte a idade do usuário
e diga se ele é maior ou menor de idade,
usando o comparador maior que (>).
 */

int main(void)
{
	int idade;

	printf("Digite sua idade: ");
	scanf("%d",&idade);

	if(idade > 17)
	{
		printf("Voce eh de maior, pode entrar!\n");
	}
	else 
	{
		printf("Sinto muito, voce nao pode entrar!\n");
	}

	return 0;
}
