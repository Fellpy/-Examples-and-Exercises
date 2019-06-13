#include <stdio.h>

int main()
{
	/* como a condição do IF é 0, é retornado falso,
	portanto, nao rodará e o ELSE será executado
	*/
	
	if(0)
	{
		printf("Somente programadores verao essa mensagem!\n");
	}
	else
	{
		printf("Hello World!\n");
	}
}