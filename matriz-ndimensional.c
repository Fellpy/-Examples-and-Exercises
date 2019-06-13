#include <stdio.h>

// Matrizes n-dimensionais

#define DIM_1	2
#define DIM_2	5
#define DIM_3	3
#define DIM_4	4

void main(void)
{
	int matriz[DIM_1][DIM_2][DIM_3][DIM_4];

	/* Código para zerar uma matriz de 4 dimensões */
	for (int i = 0; i < DIM_1; ++i)
		for (int j = 0; j < DIM_2; ++j)
			for (int k = 0; k < DIM_3; ++k)
				for (int l = 0; l < DIM_4; ++l)
					matriz[i][j][k][l] = i + j + k + l;


	for (int i = 0; i < DIM_1; ++i)
		for (int j = 0; j < DIM_2; ++j)
			for (int k = 0; k < DIM_3; ++k)
				for (int l = 0; l < DIM_4; ++l)
					printf("\nValor para matriz em [%d] [%d] [%d] [%d] = %d\n", i,j,k,l,matriz[i][j][k][l]);

}