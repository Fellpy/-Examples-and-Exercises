#include <stdio.h>
#include <stdlib.h>
#include <string.h> // lib nescessaŕia para usar as funçôes de manipulação de strings

// variaveis globais
char nomeCompleto[30];
char nomeDaEmpresa[30];
char cnpj[30];
char copiaNome[30], copiaEmpresa[30], copiaCnpj[30];

void copiarString()
{
	char resposta;
	printf("Deseja fazer uma copia dos seus dados(S/N): ");

	// faz a leitura da pergunta
	resposta = getchar();

	// compara se esta igual a resposta
	if (resposta == 's')
	{
		strcpy(copiaNome,nomeCompleto);
		strcpy(copiaEmpresa,nomeDaEmpresa);
		strcpy(copiaCnpj,cnpj);

		// exibe a copia
		printf("\nOs seguintes dados foram copiados:\n");
		fputs(copiaNome,stdout);
		fputs(copiaEmpresa,stdout);	
		fputs(copiaCnpj,stdout);

	} else
	if(resposta == 'n')
	{
		printf("\nTamanho total dos dados fornecidos: \n");
		printf("\nQuantidade de caracteres do nome:%d\n",strlen(nomeCompleto));
		printf("Quantidade caracteres da empresa: %d\n",strlen(nomeDaEmpresa));
		printf("A quantidade de numeros do CNPJ: %d\n",strlen(cnpj));
	}
}

int main()
{

	printf("Digite o seu nome completo: ");

	// le o nome
	fgets(nomeCompleto,30,stdin);

	printf("Digite o nome da empresa: ");

	// le o nome da empresa
	fgets(nomeDaEmpresa,30,stdin);

	printf("Digite o numero do CNPJ: ");

	// le o cnpj
	fgets(cnpj,30,stdin);
	
	// invoca a função
	copiarString();

	return 0;
}