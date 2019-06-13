#include <stdio.h>

/* Exercicios C Progressivo Resolvidos

1. Faça um programa que receba três inteiros e 
diga qual deles é o maior e qual o menor. Consegue criar mais de uma solução?
*/

int main(void)
{
	int num1, num2, num3;

	printf("Digite o numero 1:\n");
	scanf("%d", &num1);

	printf("Digite o numero 2:\n");
	scanf("%d", &num2);

	printf("Digite o numero 3:\n");
	scanf("%d", &num3);

	// Lógica para descobrir o maior numero
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			printf("O maior numero eh: %d\n",num1);
		}
		else
		{
			printf("O maior numero eh: %d\n",num3);
		}
	}
	else
	{
		if (num2 > num3)
		{
			printf("O maior numero eh: %d\n",num2);
		}
		else
		{
			printf("O maior numero eh: %d\n",num3);
		}
	}

	// Lógica para descobrir o menor numero
	if (num1 < num2)
	{
		if(num1 < num3)
		{
			printf("O menor numero eh: %d\n",num1);
		}
		else
		{
			printf("O menor numero eh: %d\n",num3);
		}
	}
	else
	{
		if (num2 < num3)
		{
			printf("O menor numero eh: %d\n",num2);
		}
		else
		{
			printf("O menor numero eh: %d\n",num3);
		}
	}

	return 0;
}