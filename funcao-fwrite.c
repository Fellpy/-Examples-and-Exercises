#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *arquivo;
	int vetor[100];
	int qtd;
	int i;

	arquivo = fopen("texto.dat","w");
	if (arquivo == NULL)
	{
		printf("Erro na abertura do arquivo\n");
		exit(0);
	}

	i = 0;
	while(1)
	{
		printf("Entre com um valor: ");
		scanf("%d", &vetor[i]);
		if (vetor[i] == 0)
		{
			break;
		}
		i++;
	}

	/*
	Gravando os valores lidos no vetor.
	A quantidade de bytes efetivamentegravados pode ser obtido através de
	sizeof(int) * i
	*/
	qtd = fwrite(vetor, sizeof(int), i, arquivo);
	printf("Foram gravados %d itens\n",i);
	printf("Quantidade de bytes gravados no arquivo: %d bytes\n",(sizeof(int)*i));
	
	// fecha o arquivo
	fclose(arquivo);

	return 0;
}