#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Imprimir linha por linha uma matriz

	int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i , j;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; i < 3; ++j)
		{
			printf("%d\n",mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}