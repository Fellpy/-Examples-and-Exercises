#include <stdio.h>
#include <stdlib.h>

// programa que le dois numeros e mostra a diferença entre eles(subtração)

int main()
{
	int a, b ,resultado;
	printf("Digite dois numeros inteiros:\n");
	scanf("%d %d",&a,&b);

	resultado = a - b;
	printf("Resultado da subtracao = %d\n",resultado);

	return 0;
}