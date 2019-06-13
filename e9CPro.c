#include <stdio.h>
#include <stdlib.h>

/* Exercicios C Progressivo

9. Menu - Elabore um programa que mostre o seguinte menu na tela:
Cadastro de Clientes
0 - Fim
1 - Inclui
2 - Altera
3 - Exclui
4 - Consulta
Opção:
*/

int main()
{
	printf("0 - Fim\n");
	printf("1 - Inclui\n");
	printf("2 - Altera\n");
	printf("3 - Exclui\n");
	printf("4 - Consulta\n");
	printf("Opcao: ");

	int x;
	scanf("%d", &x);

	switch(x)
	{
		case 0:
		printf("Fim\n"); break;

		case 1:
		printf("Inclui\n"); break;

		case 2:
		printf("Altera\n"); break;

		case 3:
		printf("Exclui\n"); break;

		case 4:
		printf("Consulta\n"); break;

		default:
		printf("Opcao Inexistente!\n");
		system("exit");
	}

	return 0;
}