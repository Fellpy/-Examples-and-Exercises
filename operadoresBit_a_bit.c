#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Operadores bit-a-bit:
	eles permitem operações em cada bit de um número.
	pode-se alterar cada bit de um numero somente dos
	tipos char,int e long.
	a alteração de bit-a-bit é interessante para-se
	trabalhar com a programação de baixo nível.
	*/

	unsigned char x , y; // os numeros do tipo char serao somente positivos(unsigned)

	x = 44;
	printf("x = %d\n",x);
	x = ~x; /* operador de complemento de bit ~
	ela inverte dos bits que compoem o numero:
	
	00101100 = x (44)
    11010011 = x (211)
	
	*/
	printf("x = %d\n",x);
	y = x & 167; // operador de E bit-a-bit
	printf("x & 167 = %d\n",y);
	y = x | 129; // operador de OU bit-abit
	printf("y | 129 = %d\n",y);
	y = x ^ 167; // operador de OU exclusivo bit-a-bit
	printf("x ^ 167 = %d\n",y);
	y = x << 2; // operador de deslocamento de bits para a esquerda
	printf("x << 2 = %d\n",y);
	y = x >> 2; // operadore de deslocamento de bits para a direita
	printf("x >> 2 = %d\n",y);

	return 0;
}