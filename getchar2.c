#include <stdio.h>

/* lendo um único caracter
do usuário com a função própria
para isso: getchar()
get = pegar
char = caracter
*/

int main()
{
	char letra;
	printf("Insira um caracter: ");
	letra = getchar();
	printf("Voce digitou: %c\n",letra);

	return 0;
}