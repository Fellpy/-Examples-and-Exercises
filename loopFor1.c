#include <stdio.h>
#include <stdlib.h>

int main()
{
	// faz a soma de 1 a 10
	int i, soma = 0;
	for (i = 1;i <= 10;i++){
		soma += i;
	}
	printf("Soma = %d\n",soma);

	return 0;
}