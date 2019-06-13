#include <stdio.h>
#include <stdlib.h>

/* passagem de arrays de mais
de uma dimensão como parametros
de funções.

Em um array de duas ou mais dimensões
é nescessário passar a informação do tamanho dos elementos.

aqui é declarado um array de duas dimensões com duas colunas
e quantas linhas kiser ( n ).

(int m[][2], int n)
*/

void imprime_matriz(int m[][2], int n)
{
	int i, j;
	for(i = 0; i < n; i++)
		for(j = 0; j < 2; j++)
			printf("%d\n",m[i][j]);
}

int main()
{
	int mat[3][2] = {{1,2},{3,4},{5,6}};
	imprime_matriz(mat,3);

	return 0;
}