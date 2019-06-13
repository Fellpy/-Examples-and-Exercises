#include <stdio.h>

void main(void)
{

	// Comando break

	int vlr1;
	int i;
	char resp;

	printf("Contar ate: \n");
	scanf("%d",&vlr1);

	i = 1;
	while(i <= vlr1)
	{
		printf("\n%d", i++);
		printf("\nTermina (S/N)?");
		scanf("%c",&resp);
		if (resp == 's' || resp == 'S')
		{
			break;
		}
	}
	printf("\nContagem encerrada!");
}