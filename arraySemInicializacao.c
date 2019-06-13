#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Inicializando arrays sem tamanhos */

	// o array texto terá a string tamanho 13
	//(12 caracteres + o caractere '\0')
	char texto [] = "Linguagem C.";

	// O numero de posições do vetor será 10.
	int vetor [] = {1,2,3,4,5,6,7,8,9,10};

	// o número de linhas de matriz será 5
	int matriz [][2] = {1,2, 3,4, 5,6 ,7,8 ,9,10};

	return 0;
}