#include <stdio.h>
#include <stdlib.h>

int main()
{
	int y,x = 10;
	// incrementa, depois atribui
	/* primeiro x é incrementado
	e depois o valor é atribuido a y */
	y = ++x;
	printf("x = %d\n",x);
	printf("y = %d\n",y);

	return 0;
}