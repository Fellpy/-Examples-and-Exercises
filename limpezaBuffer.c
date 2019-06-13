#include <stdio.h>

/* Funções para a limpeza do buffer:

no windows: fflush(stdin);
no linux __fpurge(stdin);

as duas funções podem ser usadas para fazer a limpeza 
da memória de buffer.

*/

int main()
{
	char letra1, letra2;

	printf("Insira um caractere: ");
	scanf("%c",&letra1);

	// limpeza do buffer
	// fflush(stdin); nao funciona
	// __fpurge(stdin); nao funciona

	printf("Insira outro caractere: ");
	scanf("%c",&letra2);

	printf("Voce digitou: %c e %c\n",letra1,letra2);

	return 0;
}