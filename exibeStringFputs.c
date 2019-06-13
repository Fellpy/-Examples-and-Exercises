#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* uso da função fpust()
	para a escrita da string na saída
	padrao(monitor).
	*/

	char texto[30] = "Hello World!";

	// exibe a string
	fputs(texto, stdout);

	printf("\n"); // pula uma nova linha

	return 0;
}