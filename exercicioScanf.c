#include <stdio.h>

int main()
{
	int num1, num2, resultado;
	printf("Digite dois numeros:\n");
	scanf("%d%d",&num1,&num2);

	resultado = num1 - num2;

	printf("Resultado da diferenca: %d\n",resultado);

	return 0;
}