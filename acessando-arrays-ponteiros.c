#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Ponteiros e arrays
	// acessando arrays com ponteiros
	// usando array

	int vet[5] = {1,2,3,4,5};
	int *p = vet; // p recebe vet[0]
	int i;
	for (i = 0; i < 5; ++i)
	{
		printf("%d\n",p[i]); // equivale a *(p + i)
	}

	return 0;

}