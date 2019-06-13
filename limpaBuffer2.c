#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* usando a função setbuf()
	para a limpeza do buffer do teclado
	para a leitura de strings
	*/


	// leitura de strings
	char string[10];

	// limpa o buffer
	setbuf(stdin,NULL);

	// le a string 
	fgets(string,10,stdin);

	return 0;
}