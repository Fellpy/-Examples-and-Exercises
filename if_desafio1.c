#include <stdio.h>

/* Exercicios C Progressivo

Desafio 1. Crie um programa em C que peça um número ao usuário e 
armazene ele na variável x. Depois peça outro número e armazene na variável y.
Mostre esses números. Em seguida, faça com que x passe a ter o 
valor de y, e que y passe a ter o valor de x.

Dica: você vai precisar usar outra variável.
*/

int main(void)
{
	int x , y , aux;

	// faz a leitura de x e y
	printf("Informe um numero inteiro: ");
	scanf("%d", &x);

	printf("Informe outro numero inteiro: ");
	scanf("%d", &y);

	// exibe os numeros digitados pelo usuario
	printf("Numeros digitados: %d e %d\n",x,y);

	aux = x; // vari auxiliar que recebe o valor de x
	x = y; // x recebe o valor de y
	y = aux; // y recebe o valor de aux

	// exibe os valores de x e y atualizados
	printf("Valores atualizados: %d e %d\n",x,y);

	return 0;
}