#include <stdio.h>
#include <stdlib.h>

/* A função fopen(const char *nome, const char *tipo) abre arquivos
para leitura, gravação do mesmo, podendo manipular e fazer operações
diversas em varios tipos de arquivos.
*/

int main(void)
{
	// ponteiro(stream) do arquivo que será acessado
	// esse ponteiro vai apontar para uma estrutura de controle
	// de dados denominada FILE que irá armazenar todas as informações
	// para se acessar o arquivo
	FILE *arquivo;

	printf("Abrindo arquivo pessoa.dat\n");

	// tenta abrir o arquivo 'pessoa.dat' para leitura
	// no diretório corrente
	arquivo = fopen("pessoa.dat", "r");
	if (arquivo == NULL)
	{
		printf("Erro na abertura do arquivo\n");
		exit(0);
	}
	else
	{
		printf("Arquivo aberto para operações\n");
	}

	return 0;
}