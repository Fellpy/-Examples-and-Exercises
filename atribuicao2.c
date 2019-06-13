#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int Z = 9; // declara a constante Z de valor 9

int main()
{
	float x; // declara x como flutuante
	float y = 3; // declara a vari real y e a inicializa com 3;
	// Correto
	x = y + 5;
	/* Errado
	y + 5 = x; */
	// Correto
	x = 5;
	/* Errado
	5 = x; */

	return 0;
}