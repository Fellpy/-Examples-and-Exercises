#include <stdio.h>
#include <stdlib.h>

/* Faz a leitura de dois numeros do tipo double
e realiza a divisão do primeiro pelo segundo
com pŕecisão de 3 casas decimais.
*/

int main()
{
	double a, b, resultado;
	printf("Digite dois numeros reais:\n");
	scanf("%lf %lf",&a,&b);

	resultado = a / b;

	printf("%.1f / %.1f = %.3f\n",a,b,resultado);

	return 0;
}