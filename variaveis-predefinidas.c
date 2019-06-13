#include <stdio.h>

void main(void)
{
	int i;

	#ifdef DEBUG
		printf("Inicio do programa %s\n", __FILE__);
		printf("Versão de %s-%s\n", __DATE__, __TIME__);
	#endif
		for (i = 1; i < 10; ++i)
		{
			printf("%d\n",i);
		}
	#ifdef DEBUG
		printf("A contagem parou! Estamos da linha %d\n", __FILE__);
	#endif
		printf("Fim da execução\n");
	#ifdef DEBUG
		printf("A ultima linha do programa é: %d\n", __LINE__);
	#endif
}