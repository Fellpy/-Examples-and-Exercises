#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int z = 9; // constante inteira z

int main()
{
	float x;
	// declara y e atribui um valor
	float y = 3;
	// atribui um valor a x
	x = 5;
	printf("x = %f\n",x);
	// atribui uma constante a x
	x = z;
	printf("x = %f\n",x);
	// atribui o resultado de uma 
	// expressão matemática a x
	x = y + 5;
	printf("x = %f\n",x);
	// atribui o resultado de uma função a x
	x = sqrt(9); // função sqrt da biblioteca math.h
	printf("x = %f\n",x);

	return 0;
}