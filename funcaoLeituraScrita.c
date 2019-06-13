#include <stdio.h>
#include <stdlib.h>

/*
	
	Rever conteudo

evita-se o uso de operações de leitura e escrita(scanf e printf),
dentro de funções especificas caso essa nao for o foco da mesma,
e ainda mais quando valores sao passados por meio de parâmetros.
Isso não impede de poder usar operações de leitura e escrita dentro
de funções especificas.

as funções de leitura e escrita são feitas em quem chama tal determinada
função especifica para assim passar valores por meio de parametros ou nao.
*/

// função que contem operações de leitura e escrita
int menu()
{
	int i;
	do {
		printf("Escolha uma opcao: \n");
		printf("(1) Opcao 1\n");
		printf("(2) Opcao 2\n");
		printf("(3) Opcao 3\n");
		scanf("%d",&i);
	} while  ((i < 1) || (i > 3));

	return i;
}

int main()
{
	int op = menu();
	printf("Voce escolheu a opcao %d\n",op);

	return 0;
}
