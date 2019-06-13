#include <stdio.h>
#include <stdlib.h>

/* uma função pode também nao retornar
um valor quando terminado os seus comandos.
Para isso basta usar a palavra void no tipo
retornado da função.
*/

// declarando uma função que nao retorna valor
void imprime (int n)
{
	int i;
	for(i = 0; i <= n; i++)
	{
		printf("Linha %d\n",i);
	}
}

int main()
{
	imprime(5);

	return 0;
}