#include <stdio.h>

void main(void)
{

	int vlr_a;
	int vlr_b;

	while(1)
	{
		printf("Valores: ");
		scanf("%d %d", &vlr_a, &vlr_b);
		if (vlr_a == 0)
			goto fim;
		if (vlr_b)
			goto erro;
		printf("Divisão: %d\n",vlr_a / vlr_b);
	}

	erro:
	printf("Divisão por zero\n");
	fim:
	printf("Fim da execução do programa\n");
}