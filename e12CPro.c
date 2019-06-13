#include <stdio.h>

/* Exercicios C Progressivo

6 - Faça um programa que pergunte um número ao 
usuário e diga se ele é ímpar. Use o operador %.
*/

int main(void)
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d",&numero);

	if((numero % 2) == 1)
	{
		printf("Eh ímpar!\n");
	}
	else {
		printf("Eh par!\n");
	}

	return 0;
}