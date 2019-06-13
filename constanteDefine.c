#include <stdio.h>
#include <stdlib.h>

// declaração de constante
#define ICMS 0.18

/* Onde o pré-processador encontrar a palavra ICMS
dentro do código, ele irá substituir pelo valor
definido no valor da declaração #define(0.18).
*/

int main()
{
	float preco_produto, valor_icms;

	printf("Informe o valor de produto: \n");
	scanf("%f", &preco_produto);

	valor_icms = preco_produto * ICMS;

	printf("Valor de imposto a ser pago: R$ %.2f\n",valor_icms);

	return 0;
}