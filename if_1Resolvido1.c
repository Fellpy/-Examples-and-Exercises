#include <stdio.h>

/* Exercicios C Progressivo Resolvidos

Outra forma - 1. Faça um programa que receba três inteiros e 
diga qual deles é o maior e qual o menor. Consegue criar mais de uma solução?
*/

int main(void)
{
	int num1, num2, num3, maior, menor;

	printf("Digite o numero 1:\n");
	scanf("%d", &num1);

	printf("Digite o numero 2:\n");
	scanf("%d",&num2);

	printf("Digite o numero 3:\n");
	scanf("%d",&num3);

	// Lógica para descobrir o maior numero
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			maior = num1;
		}
		else
		{
			maior = num3;
		}
	}
	else
	{
		if (num2 > num3)
		{
			maior = num2;
		}
		else
		{
			maior = num3;
		}
	}

	// Lógica para descobrir o menor numero

	if (num1 < num2)
	{
		if (num1 < num3)
		{
			menor = num1;
		}
		else
		{
			menor = num3;
		}
	}
	else
	{
		if (num2 < num3)
		{
			menor = num2;
		}
		else
		{
			menor = num3;
		}
	}

	printf("O maior numero e: %d\n",maior);
	printf("O menor numero e: %d\n",menor);

	return 0;
}