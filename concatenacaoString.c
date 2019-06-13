#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* a função strcat() concatena strings 
	da seguinte forma: pega o primeiro caracter
	da string a ser copiada e coloca no lugar
	do elemento "\0" da string destino
	*/

	char str1[15] = "bom ";
	char str2[15] = "dia!";

	// concatena str2 a string str1
	strcat(str1,str2);
	printf("%s\n",str1);

	return 0;


}