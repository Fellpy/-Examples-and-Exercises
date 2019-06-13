#include <stdio.h>

/* Exercicios C Progressivo

7. Quadrado de asteriscos
Escreva um programa que lê o tamanho do lado de um quadrado e 
imprime um quadrado daquele tamanho com asteriscos. 

Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:
*****
*****
*****
*****
*****
*/

int main(void)
{

	int tamanhoLado, n = 0;

	// Lê o tamanho do lado do quadrado
	printf("Informe o tamanho do lado do quadrado: ");
	scanf("%d", &tamanhoLado);

	// Processamento
	if (tamanhoLado <= 20 && tamanhoLado > 1)
	{
		// Imprime as linhas
		while(n < tamanhoLado)
		{
			int i = 0; // Variavel local
			// Imprime os asteriscos
			while(i < tamanhoLado)
			{
				printf("*");
				i++;
			}
			printf("\n");
			n++;
		}
	}
	else
		printf("Informe somente os tamanhos entre 1 e 20\n");

	return 0;
}