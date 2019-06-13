#include <stdio.h>

/* Exercicios C Progressivo

1. Faça um programa que receba três inteiros e 
diga qual deles é o maior e qual o menor. 
Consegue criar mais de uma solução?
*/

int main(void)
{
	int n1,n2,n3;

	printf("Digite um numero inteiro: ");
	scanf("%d",&n1);

	printf("Digite outro numero inteiro: ");
	scanf("%d",&n2);

	printf("Digite mais um numero inteiro: ");
	scanf("%d",&n3);

	if(n1 > n2 && n1 > n3)
	{
		printf("%d eh o maior numero!\n",n1);
		if(n2 < n3)
			printf("%d eh o menor numero!\n",n2);
		else
			printf("%d eh o menor numero!\n",n3);
	}

	if(n2 > n1 && n2 > n3)
	{
		printf("%d eh o maior numero!\n",n2);
		if(n1 < n3)
			printf("%d eh o menor numero!\n",n1);
		else
			printf("%d eh o menor numero!\n",n3);
	}

	if(n3 > n1 && n3 > n2)
	{
		printf("%d eh o maior numero!\n",n3);
		if(n1 < n2)
			printf("%d eh o menor numero!\n",n1);
		else
			printf("%d eh o menor numero!\n",n2);
	}

	return 0;
}