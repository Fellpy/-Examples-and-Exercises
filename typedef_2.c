#include <stdio.h>
#include <stdlib.h>

/* o comando typedef pode ser combinado
com tipos definidos pelo programador
(struct,union,enum), podendo assim
omitir os seus nomes originais

REVISAR CONTEÚDO!

*/

// declarando um typedef(positivos[]) para um array de unsigned int
typedef unsigned int positivos[5]; // como se fosse: unsigned int[5]

int main()
{
	positivos v; // declaração confusa
	int i;
	for(i = 0; i < 5; i++)
	{
		printf("Digite o valor de v[%d]:\n",i);
		scanf("%d",&v[i]);
	}

	for(i = 0; i < 5;i++)
	{
		printf("Valor de v[%d]: %d\n",i,v[i]);
	}

	return 0;
}