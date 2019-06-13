#include <stdio.h>
#include <stdlib.h>

// a função fclose(FILE *arquivo) fecha o arquivo aberto
// possibilitando que as alterações feitas no arquivo sejam
// concretas

int main(void)
{

	FILE *arquivo;

	printf("Abrindo arquivo pessoa.dat\n");

	arquivo = fopen("pessoa.dat", "r");
	if (arquivo == NULL)
	{
		printf("Erro na abertura do arquivo!\n");
		exit(0);
	}
	else 
	{
		printf("Arquivo aberto para operações..\n");
	}

	// Operações sobre o arquivo

	printf("Fechando o arquivo...\n");

	// fecha o arquivo
	fclose(arquivo); // é passado o ponteiro do arquivo e não o seu nome

	return 0;
}