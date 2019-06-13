#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* matriz é um vetor com duas dimensões
	onde se pode armazenar uma quantidade maior
	de dados do mesmo tipo.

	para acessar o valor de uma posição da matriz,
	se utiliza dois índices: um para a linha
	e outro para a coluna

	int nome_do_array[num de linhas][num de colunas]
	*/

	int matriz[5][5]; // declaração da matriz

	for (int linha = 0; linha < 10; ++linha)
	{
		for (int coluna = 0; coluna < 5; ++coluna)
		{
			if(linha == coluna)
				printf("%d\n",matriz[linha][coluna]);
		}
	}
	return 0;
}