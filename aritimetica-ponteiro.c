#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = 0x5DC;
	printf("p = Hexadecimal: %p Decimal: %d\n",p,p);

	// Incrementa p em uma posição
	p++;
	printf("p = Hexadecimal: %p Decimal: %d\n",p,p);

	// Incrementa p em 15 posições/ avança 15 posições de 4 bytes na memória
	p = p + 15;
	printf("p = Hexadecimal: %p Decimal: %d\n",p,p);

	// Decrementa p em 2 posições/ retrocede duas posições de 4 bytes na memoria
	p - p - 2;
	printf("p = Hexadecimal %p Decimal: %d\n",p,p);

	return 0;
}