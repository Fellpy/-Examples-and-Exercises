#include <stdio.h>

void main(void)
{
	// operador ternário
	int vlr1;
	printf("Entre com um numero: ");
	scanf("%d", &vlr1);
	printf((vlr1 % 2 == 0 ? "Numero Par\n" : "Número Impar\n"));
}