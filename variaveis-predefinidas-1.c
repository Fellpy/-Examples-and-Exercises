#include <stdio.h>
#include <stdlib.h>

void main(void)
{

	int op;

	printf("********* Variaveis pré-definidas **********\n\n");
	printf("Informe uma das opções abaixo:\n");
	printf("1 - Nome do aquivo fonte atual\n");
	printf("2 - Data atual\n");
	printf("3 - Hora atual\n");
	printf("4 - Linha em que o programa está\n");
	printf("5 - para exibir todas as informações juntas\n");
	printf(">>> ");
	scanf("%d",&op);

	switch(op)
	{
		case 1:
		printf("Nome do arquivo atual: %s\n", __FILE__);
		break;
		case 2:
		printf("Data atual: %s\n", __DATE__);
		break;
		case 3:
		printf("Hora atual: %s\n", __TIME__);
		break;
		case 4:
		printf("Linha atual do programa: %d\n", __LINE__);
		break;
		case 5:
		printf("Nome do arquivo fonte atual: %s", __FILE__);
		printf(" Data: %s Hora: %s Linha do programa: %d\n", __DATE__, __TIME__, __LINE__);
		break;
		default:
		printf("Opção invalida, encerrando o programa!\n");
		exit(0);
	}
}