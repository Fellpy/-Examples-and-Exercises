#include <stdio.h>

// funções

// declara um prototipo de função
int soma(int , int );

void main(void)
{

	int vlr_a;
	int vlr_b;
	int resultado;

	printf("Entre com os valores: ");
	scanf("%d %d", &vlr_a, &vlr_b);
	resultado = soma(vlr_a, vlr_b);
	printf("Soma: %d\n", resultado);
}

// corpo da função
int soma(int a, int b)
{
	return a + b;
}