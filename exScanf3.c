#include <stdio.h>
#include <stdlib.h>

// le dois numeros e mostra o produto deles, com precisao de dois numeros

int main()
{
	float a, b , resultado;
	printf("Digite dois numeros reais:\n");
	scanf("%f %f",&a,&b);

	resultado = a * b;
	printf("%.1f + %.1f = %.2f\n",a,b,resultado);

	return 0;
}