#include <stdio.h>

/* Exercicios C Progressivo

4 - Faça o programa do teste de maioridade usando o operador <=
*/

int main(void)
{
	int idade;

	printf("Informe a sua idade: ");
	scanf("%d",&idade);

	if(idade <= 17)
	{
		printf("Voce nao pode entrar!\n");
	}
	else 
	{
		printf("Voce eh de maior, pode entrar!\n");
	}

	return 0;
}