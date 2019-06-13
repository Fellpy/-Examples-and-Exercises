#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Programa que tem o mesmo proposito
	do programa feito em GOTO,porém, com
	o uso de laço FOR. Mostra a diferença
	entre GOTO e FOR. Sendo que com o uso
	do laço FOR é mais simples.
	*/

	int i ;
	for(i = 0;i < 5;i++){
		printf("Numero: %d\n",i);
	}

	return 0;
}