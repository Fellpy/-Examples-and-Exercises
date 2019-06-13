#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Ponteiros e arrays
	// Acessando arrays com ponteiros

	// usando ponteiros
	int vet[5] = {1,2,3,4,5};
	int *p = vet; //p recebe o endereço de memória do começo do vetor vet
	int i;

	for (i = 0; i < 5; ++i)
	{
		printf("%d\n", *(p + i)); // equivale a p[i]
	}

	return 0;
}