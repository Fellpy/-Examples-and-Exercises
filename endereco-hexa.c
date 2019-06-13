#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Ednereço hexadecimal da porta serial
	int *p = 0x3F8;

	// O valor em decimal é convertido para o seu valor 
	// hexadecimal: 0x5DC
	int *p1 = 1500;
	printf("Endereco em p: %p\n",p);
	printf("Endereco em p1: %p\n",p1);

	return 0;
}