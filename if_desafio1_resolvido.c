#include <stdio.h>

/* Exercicios C Progressivo Desafio 1 Resolvido

Desafio 1. Crie um programa em C que peça um número ao usuário e armazene ele 
na variável x. Depois peça outro número e armazene na variável y.
Mostre esses números. Em seguida, faça com que x passe a ter o valor de y,
 e que y passe a ter o valor de x.
 */

int main(void)
{
	int x, y, tmp;

	printf("x = ");
	scanf("%d",&x);

	printf("y = ");
	scanf("%d",&y);

	printf("Trocando os valores de x e y!\n");

	// É importante que entenda e decore as seguintes linhas
    // Elas são muito importantes e usadas em programação C

    tmp = x;
    x = y;
    y = tmp;

    printf("\nx = %d \ny = %d\n",x,y);

    return 0;
}