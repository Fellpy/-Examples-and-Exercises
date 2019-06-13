#include <stdio.h>

/* Exercicios C Progressivo Resolvido

Exercicio 0 de outra forma.
*/

int main(void)
{
	int x, y, maior;

	printf("Digite o numero 1:\n");
	scanf("%d",&x);

	printf("Digite o numero 2:\n");
	scanf("%d",&y);

	if (x > y)
	{
		maior = x;
	}
	else
	{
		maior = y;
	}

	printf("O maior numero eh: %d\n",maior);

	return 0;
}