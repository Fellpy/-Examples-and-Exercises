#include <stdio.h>

int main()
{
	/* mostra a diferença entre float e double
	que se resume em precisão(float) e mais precisão(double)
	0 e 0.0 são diferentes por causa da casa decimal.
	um inteiro nao pode conter 0.0, mas um float ou double pode
	*/

	float pi = 3.14; // precisão simples
	double piDouble = 3.1415926535897932384626433832795; // precisão dupla

	printf("Valor de pi %.10f\n", pi);
	printf("Valor de pi mais preciso %.50f\n", piDouble);

	return 0;	
}