#include <stdio.h>

/* Exercicios C Progressivo

5 - Faça o programa do teste de maioridade usando o operador >=
*/

int main(void)
{
	int idade;

	printf("Informe a sua idade: ");
	scanf("%d",&idade);

	if(idade >= 18)
	{
		printf("Voce eh de maior, pode entrar!\n");
	}
	else 
	{
		printf("Voce nao pode entrar!\n");
	}

	return 0;	
}