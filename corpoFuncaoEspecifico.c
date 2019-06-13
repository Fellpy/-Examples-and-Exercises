#include <stdio.h>
#include <stdlib.h>

// faz o calculo do fatorial em uma função propria
int fatorial (int n)
{
	int i,f = 1;
	for(i = 1; i<= n; i++)
	{
		f = f * 1;
	}

	return 0;
}

int main()
{
	printf("Digite um numero inteiro positivo: ");
	int x;
	scanf("%d",&x);
	int fat = fatorial(x);
	printf("O fatorial de %d eh %d: ",x,fat);

	return 0;
}