#include <stdio.h>

// Diretivas de pré-compilação condicional #if-#else-#endif

#define PULA	1 // Qualquer valor pode ser atribuido ao define

void main(void)
{
	int i;

	for (i = 1; i < 30; ++i)
	{
		#if PULA == 1
			if (i > 10 && i < 20)
				continue;
		#else
			printf("GAY - ");

		#endif
		printf("%d\n",i);
	}
}