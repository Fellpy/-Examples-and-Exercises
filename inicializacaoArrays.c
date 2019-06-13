#include <stdio.h>
#include <stdlib.h>

int main()
{

	/* exemplo de inicialização de diferentes
	tipos e numeros de dimensões de arrays
	*/

	// inicializando matriz de duas dimensões
	int matriz1 [3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int matriz2 [3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

	// inicializando vetor de String
	char str1 [10] = {'J','o','a','o','\0'};
	char str2 [10] = "Joao";

	// inicializando matriz de String
	char str_matriz [3][10] = {"Joao","Maria","Jose"};

	return 0;
}