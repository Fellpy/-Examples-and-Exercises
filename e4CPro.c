#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exercicios C Progressivo

4. Mensagem - Escreva uma mensagem para uma pessoa de que goste. Implemente um programa
que imprima essa mensagem, e envie-a.
*/

typedef struct
{
	char m[15];
	char m1[15];
	char m2[15];
	int numero;
} dados;

int main()
{
	dados dados = {"voce e linda","voce e gay","voce e feia",0};
	printf("---------- Mensagens ----------\n");
	printf("1 - Voce e linda!\n");
	printf("2 - Voce e gay!\n");
	printf("3 - Voce e boba!\n");

    char nomePessoa[50];
	printf("\nDigite o nome da pessoa que voce deseja mandar essas Mensagens: ");
	fgets(nomePessoa,50,stdin);

	printf("\nAgora escolha o numero correspondente de uma das mensagens acima: ");
	scanf("%d",&dados.numero);

	switch(dados.numero)
	{
		case 1:
		strcat(nomePessoa,dados.m);
		printf("%s\n",nomePessoa);
		break;

		case 2:
		strcat(nomePessoa,dados.m1);
		printf("%s\n",nomePessoa);
		break;

		case 3:
		strcat(nomePessoa,dados.m2);
		printf("%s\n",nomePessoa);
		break;

		default:
		printf("Escolha somente um dos numeros especificados das mensagens!\n");
		system("exit");
	}
	return 0;
}