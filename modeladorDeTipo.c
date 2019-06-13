#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Modeladores de tipo(type cast) é
	uma forma de conversão explicita que ocorre
	dentro do programa para forçar com que o
	resultado de uma expressão seja daquele tipo
	especificado pelo modelador 
	*/

	float x,y,f = 65.5;
	x = f/10.0;
	// modelando o resultado da expressao (f/10.0) para tipo inteiro,
	// perdendo suas casas decimais
	y = (int) (f/10.0);
	printf("x = %f\n",x);
	printf("y = %f\n",y);

	return 0;
}