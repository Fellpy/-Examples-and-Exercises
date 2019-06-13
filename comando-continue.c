#include <stdio.h>

void main(void)
{
	int i;

	// De 1 até 29
	for (i = 1; i < 30; ++i)
	{
		if (i > 10 && i < 20) // se a variavel i estiver entre 11 e 19
		{
			continue;
		}
		printf("%d\n",i);
	}
}