#include <stdio.h>

/* Exercicios C Progressivo

3. Programa em C que mostra os números pares e ímpares 
Escreva um aplicativo em C que recebe inteiro e mostra os 
números pares e ímpares (separados), de 1 até esse inteiro.
*/

int main(void)
{

	int num, count = 2;

	// recebe um numero inteiro
	printf("Informe um numero inteiro: ");
	scanf("%d",&num);

	while(count <= num)
	{
		if (count % 2 == 0)
			printf("Par: %d\n",count);
		else
			printf("impar: %d\n",count);

		count++;
	}

	return 0;
}