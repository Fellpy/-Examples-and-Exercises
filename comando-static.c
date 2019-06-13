#include <stdio.h>

int somatorio(int , int);

void main(void)
{
	int vlr_a;
	int i;

	i = 1;
	while(1)
	{
		printf("Entre com um valor: ");
		scanf("%d",&vlr_a);
		// quando o valor for zero o programa é encerrado
		if (vlr_a == 0)
		{
			break;
		}

		printf("Somatorio: %d\n", somatorio(i++ , vlr_a));
	}
}

int somatorio(int cont, int vlr)
{
	// variavel static, ou seja, o seu conteúdo é guardado na memoria
	// até o final da execução do programa
	static int soma;
	if (cont == 1)
		soma = vlr;
	else
		soma += vlr;
	return soma;
}