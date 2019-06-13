#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* é suportada multiplas atribuições,
	onde podemos atribuir um valor a varias
	variaveis do mesmo tipo ou diferentes.
	*/

	float x,y,z;

	/* x , y e z conterão o valor 5,
	pois o valor 5 é copiado para a vari z
	e o valor de z é copiado para y que será
	copiada para x, fazendo com que todas
	as variaveis contenham o valor 5.
	*/
	x = y = z = 5;

	printf("x = %f\n",x);
	printf("y = %f\n",y);
	printf("z = %f\n",z);

	return 0;
}