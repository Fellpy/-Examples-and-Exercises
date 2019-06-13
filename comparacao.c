#include <stdio.h>

/*
Faça um programa em C que pergunte ao usuário
quanto é 1 + 1, usando o teste condicional IF ELSE,
e que responda se ele acertou ou errou.
*/

int main(void)
{
	int resultado;

	printf("Quanto eh 1 + 1?\n");
	scanf("%d",&resultado);

	if(resultado == 2)
	{
		printf("Parabens, voce nao usa drogas!\n");
	}
	else 
	{
		printf("Amigo, pare de fumar isso...\n");
	}

	return 0;
}
