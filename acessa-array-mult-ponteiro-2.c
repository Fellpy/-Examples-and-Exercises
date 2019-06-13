#include <stdio.h>
#include <stdlib.h>

// Acessando um array multimensional utilizando ponteiros

// ------ Usando ponteiro -----

int main(void)
{
	int mat[2][2] = {

					{1 , 2},
					{3 , 4} };

	int *p = &mat[0][0];

	for (int i = 0; i < 4; ++i)
	{
		printf("%d\n", *(p + i) );
	}

	return 0;
}