#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* o operador ternário(?)tem a mesma função
	do if-else,porém, ela é limitada e não atende
	grandes demandas que so o if-else atenderiam.
	ela é mais usada para atribuições condicionais simples.
	*/
	int x,y,z;

	printf("Digite x: ");
	scanf("%d",&x);

	printf("Digite y: ");
	scanf("%d",&y);

	// operador ternário -> (?)
	/* avalia se x é maior do que y,
	se for o valor de x será atribuído a z,
	se nao for o valor de y será atribuído a z
	*/
	z = x > y   ?   x : y;
	printf("Maior = %d\n",z);

	return 0;
}