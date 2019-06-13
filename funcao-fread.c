#include <stdio.h>
#include <stdlib.h>

/* A função fread realiza a leitura de dados do arquivo e transfere os mesmos
para o endereço de memória fornecido no parâmetro. A quantidade de bytes
que serão lidos estará baseada no tamanho fornecido multiplicado pela quan-
tidade indicada. A função irá retornar a quantidade de itens lidos efetivamen-
te.

int fread( void *memoria, int tamanho, int quantidade,FILE *arquivo);
*/

int main(void)
{
	FILE *arquivo;
	int vetor[100];
	int qtd;

	arquivo = fopen("pessoa.dat","r");
	if (arquivo == NULL)
	{
		printf("Erro de abertura do arquivo!\n");
		exit(0);
	}

	// le valores inteiros. Cada inteiro tem 4 bytes
	// ou seja, esta chamada a função fread irá ler 400 bytes
	qtd = fread(vetor, sizeof(int), 100, arquivo);

	printf("Foram lidos %d itens\n", qtd); // retorno tem qtd d itens e nao bytes
	for (int i = 0; i < qtd; ++i)
	{
		printf("%d\n", vetor[i]);
	}

	fclose(arquivo);

	return 0;
}