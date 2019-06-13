#include <stdio.h>
#include <stdlib.h>

void main(void)
{

	int vlr_a;
	int vlr_b;

	while(1)
	{
		printf("Valores: ");
		scanf("%d %d", &vlr_a, &vlr_b);

		if (vlr_a == 0)
			exit(0);
		if (vlr_b)
			exit(11);
		printf("Divisão: %d\n", (vlr_a / vlr_b) );
	}
}