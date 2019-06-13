#include <stdio.h>
#include <stdlib.h>

int main()
{
	int y,x = 10;
	// atribui, depois incrementa
	/* o valor de x é atribuido a y,
	depois'o x é incrementado mais 1.
	x = 11
	y = 10;
	*/
	y = x++;
	printf("x = %d\n",x);
	printf("y = %d\n",y);

	return 0;
}