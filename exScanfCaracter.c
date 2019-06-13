#include <stdio.h>

/* le um caractere do usuário
com a função scanf() e operador %c para tipos char
*/

int main()
{
	char letra;

	printf("Insira um caractere: ");
	scanf("%c",&letra);

	printf("Voce digitou: %c\n",letra);;

	return 0;
}