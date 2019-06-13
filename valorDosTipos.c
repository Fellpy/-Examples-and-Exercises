#include <stdio.h>

int main()
{
	/* mostra o quanto vale
	o valor dos tipos primitivos de C (em bytes)
	que valem para o meu computador,
	sem os modificadores de tipos
	atraves da função sizeof().
	*/
	printf("Tipos primitivos de C:\nchar\nint\nfloat\ndouble\nlong\nvoid\n");
	printf("Valor do tipo char: %d byte\n",sizeof(char));
	printf("Valor do tipo int: %d bytes\n",sizeof(int));
	printf("Valor do tipo long: %d bytes\n",sizeof(long));
	printf("Valor do tipo float: %d bytes\n", sizeof(float));
	printf("Valor do tipo double: %d bytes\n", sizeof(double));
	printf("Valor do tipo void: %d byte\n", sizeof(void));
	return 0;
}