#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, soma = 0;
	i = 1;
	while(i <= 10){
		soma += i;
		i++;
	}

	printf("Soma = %d\n",soma);

	return 0;
}