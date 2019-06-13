#include <stdio.h>

/* Exercicios C Progressivo

5. Achando o maior número
Achar o maior, menor, média e organizar números ou sequências são 
os algoritmos mais importantes e estudados em Computação. Em C não poderia ser diferente.
Em nosso curso, obviamente, também não será diferente.

Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final
mostre qual destes números é o maior.
*/

int main(void)
{
	int numero, nMaior = 0, n;

	// Processamento
	n = 1;
	while(numero != 0)
	{
		printf("Informe um numero: ");
		scanf("%d",&numero);

		// Verifica se o numero é maior ou menor
		if (numero > nMaior)
			nMaior = numero;
		
		n += 1;
	}

	printf("Maior numero: %d\n", nMaior);

	return 0;
}