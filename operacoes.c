#include <stdio.h>

int main()
{
	int soma = 1 + 1;

	// o caractere %i tambem serve para formatar numeros inteiros
	printf("1 + 1 = %i \n", soma);

	int numero1 = 10;
	int numero2 = 20;

	// Podemos fazer o valor de uma variavel de um programa
	soma  = numero1 + numero2;

	// os caracetes de formatação so podem ser minusculos
	printf("%d + %d = %d \n", numero1,numero2,soma);

	printf("%d - %d = %d\n",soma,numero1,(soma - numero1));
}