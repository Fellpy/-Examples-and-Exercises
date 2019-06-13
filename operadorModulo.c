#include <stdio.h>

/*
Crie um programa em C que pergunte um 
número ao usuário e diga se ele é par. 
Use o operador módulo ou resto da divisão %.
*/

int main(void)
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d",&numero);

	if((numero % 2) == 0)
	{
		printf("Eh par!\n");
	}
	else 
	{
		printf("Eh ímpar!\n");
	}

	return 0;
}