#include <stdio.h>

/* Exercicios C Progressivo Resolvidos

0. Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o menor
*/

int main(void)
{
	int x, y;
	printf("Digite o numero 1: ");
	scanf("%d", &x);

	printf("Digite o numero 2: ");
	scanf("%d", &y);

	if(x > y)
	{
		printf("Maior: x = %d\n",x);
	}
	else 
	{
		printf("Maior: y = %d\n",y);
	}

	return 0;
}