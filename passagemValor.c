#include <stdio.h>
#include <stdlib.h>

/* tipo de passagem de parametro por valor
e o padrão para todos os tipo básicos pré-estabelecidos
e para tipo definidos.

mesmo que o valor de uma variavel mude dentro da função,
nada acontece com o valor de fora da função.
*/

void soma_mais_um(int n){
	n = n + 1;
	printf("Dentro da função: x = %d\n",n);
}

int main()
{
	int x = 5;
	printf("Antes da funcao: x = %d\n",x);
	soma_mais_um(x);
	printf("Depois da funcao: x = %d\n",x);

	return 0;
}