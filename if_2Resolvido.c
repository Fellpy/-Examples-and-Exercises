#include <stdio.h>

/* Exercicios C Progressivo Resolvidos

2. Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.
*/

int main(void)
{
	int num;

	printf("Digite um numero:\n");
	scanf("%d", &num);

	if(num % 2 == 1)
	{
		printf("%d e impar\n",num);
	}
	else
	{
		printf("%d e par\n",num);
	}

	return 0;
}