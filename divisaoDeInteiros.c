#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* em uma divisão se os numeros forem
	inteiros o compilador irá retornar apenas
	a parte inteira da divisão.
	*/

	float x;
	x = 5/4;
	printf("x = %f\n",x); // 0
	x = 5/4.0;
	printf("x = %f\n",x); // 1.250000

	return 0;
}