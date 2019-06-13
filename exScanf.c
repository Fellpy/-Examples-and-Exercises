#include <stdio.h>

void main()
{
	double num1, num2, resultado;

	printf("Digite um numero: ");
	scanf("%lf",&num1); // para ler valores double se usa %lf (long float)

	printf("Digite outro numero: ");
	scanf("%lf",&num2);

	resultado = num1 / num2;

	printf("Resultado da divisao: %.3f\n", resultado);
}