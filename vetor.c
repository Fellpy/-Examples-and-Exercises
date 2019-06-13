#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* vetor é uma estrutura capaz
	de armazenar um conjunto de valores de mesmo tipo
	com um único nome de referencia.
	*/

	// declarando um vetor
	int notas[100];
	int i, j;
	// laço para preencher o vetor com as
	// notas digitadas pelo usuário
	for(i = 0, j = 0; i <= 100;i++, j++){
		printf("Digite a nota do aluno %d\n",j);
		scanf("%d",&notas[i]);
	}
	return 0;
}