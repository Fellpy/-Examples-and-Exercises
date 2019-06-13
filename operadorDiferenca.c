#include <stdio.h>

/*
Crie um programa em C que pergunte um 
número de 1 até 10 ao usuário, e faça com que ele 
tente acertar o número secreto. No meu caso, 
o número secreto é 7.
*/

int main(void)
{
	int numero;

	printf("Adivinha a senha, entre 1 e 10: ");
	scanf("%d",&numero);

	if(numero != 7)
	{
		printf("Errado! Saia da Matrix!\n");
	}
	else
	{
		printf("Parabens, voce entrou no sistema!\n");
	}

	return 0;
}