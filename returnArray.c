#include <stdio.h>
#include <stdlib.h>

/* nao é possivel retornar 
um array diretamente em uma
função, somente é possivel retornar
um array indiretamente se ele for parte 
de uma estrutura.
*/

struct vetor
{
	int v[5];
};

struct vetor retorna_array()
{
	struct vetor v = {1,2,3,4,5};
	return v;
};

int main()
{
	int i;
	struct vetor vet = retorna_array();
	for(i = 0; i < 5; i++)
		printf("Valores: %d\n", vet.v[i]);

	return 0;
}