#include <stdio.h>

// Diretivas de pré-compilação condicional #ifdef-ifndef

void main(void)
{
	int i;
	
	#ifdef DOS
		clrscr();
	#else
		#ifdef UNIX
			printf("^[[2J^[[H"); // Linux sequencia de caracteres
		#endif

	#endif
			for (i = 1; i < 10; ++i)
			{
				printf("%d\n",i);
			}
}