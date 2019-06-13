#include <stdio.h>

int main()
{
	// o valor 67 na tabela ASCII equivale a letra C
	char ascii = 67;
	printf("%c\n",ascii);

	// escrevendo "oi" pelos numeros da tabela ASCII
	// o numero 111 equivale a letra "o" e o numero 105 equivale a letra "i"
	printf("%c%c\n",111,105);

	return 0;
}