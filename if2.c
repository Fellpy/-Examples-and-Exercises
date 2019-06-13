#include <stdio.h>

int main()
{
	// código em que o teste condicional nunca é executado

	/*
	Se rodar, aparecerá na tela somente o 
	"Hello, World" pois o 0 sempre retorna valor 
	'false' para o teste condicional IF. 
	Como o resultado é falso, o que está dentro do IF não é executado
	*/
	
	if(0)
	{
		printf("Somente programadores verao essa mensagem\n");
	}

	printf("Hello World!\n");

	return 0;
}