#include <stdio.h>
#include <stdlib.h>

/* na definição de uma enumeração
pode-se definir valores da tabela
ASCII pra as constantes
*/

// declarando a enumeração e definindo valores da tabela ASCII
enum escapes {retorcesso = '\b', tabulacao = '\t',novalinha = '\n'};

int main()
{
	enum escapes e = novalinha;
	printf("Teste %c de %c escrita\n",e,e);
	e = tabulacao;
	printf("Teste %c de %c escrita\n",e,e);

	return 0;
}