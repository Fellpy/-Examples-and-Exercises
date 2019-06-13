#include <stdio.h>

// Diretiva de pré-compilação #define
// #define define constantes de pré-compilação

// declarando uma constante do pré-compilador
#define VALOR_MAGICO 34

void main(void)
{
	int vlr_a;

	while(1)
	{
		printf("Entre com o valor: ");
		scanf("%d",&vlr_a);
		if (vlr_a == VALOR_MAGICO)
		{
			break;
		}
	}
}