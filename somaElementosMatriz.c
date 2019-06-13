#include <stdio.h>
#include <stdlib.h>

int main()
{
	// soma os elementos de uma matriz de inteiros

	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i, j, soma = 0;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; i < 3; ++j)
		{
			soma += mat[i][j];
		}
	}

	printf("Soma = %d\n",soma);
	return 0;
}