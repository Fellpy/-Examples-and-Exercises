#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *arquivo;
	char vetor[100][100]; // vetor de strings
	char *nome;


	// abrindo o arquivo
	arquivo = fopen("texto.dat","r");
	if (arquivo == NULL)
	{
		printf("Erro na abertura do arquivo\n");
		exit(0);
	}

	int i = 0;
	// realizando a leitura do arquivo
	while(1)
	{
		// Cada linha do arquivo nao podera ter mais de 
		// 100 caracteres
		nome = fgets(vetor[i],100,arquivo);
		if (nome == NULL)
		{
			break;
		}
		i++;
	}

	// exibindo o conteúdo do arquivo
	printf("Linha lidas\n");
	for (int j = 0; j < i; ++j)
	{
		printf("Linha %2d - %s",j + 1, vetor[j]);
	}
	printf("\n");

	// fecha o arquivo
	fclose(arquivo);

	return 0;
}