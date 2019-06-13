#include <stdio.h>

int main()
{
	int num1,num2,resultado;
	printf("Digite um numero:\n");
	scanf("%d",&num1);

	printf("Digite outro numero:\n");
	scanf("%d",&num2);

	resultado = num1 + num2;

	printf("%d + %d = %d\n",num1,num2,resultado);

	return 0;
}