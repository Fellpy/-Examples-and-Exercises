#include <stdio.h>

/* Exercicios C Progressivo

2. Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.
*/

int main(void)
{
	int numero;
	printf("Digite um numero inteiro: ");
	scanf("%d",&numero);

	// verifica se o numero digitado é ímpar ou par
	if ((numero % 2) == 0)
	{
		printf("O numero eh PAR!\n");
	}
	else
		printf("O numero eh IMPAR!\n");

	return 0;
}