#include <stdio.h>
#include <stdlib.h>

// Acessando array multimensional utilizando ponteiros

// ----- Usando array -----

int main(void)
{
	int mat[2][2] = {
						{1 , 2},
						{3,  4} };

	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 2; ++j)
		{
			printf("%d\n", mat[i][j]);
		}

	return 0;
}