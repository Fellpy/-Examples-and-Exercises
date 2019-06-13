#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Ponteiro genérico
	// um ponteiro generico aponta(armazena) o endereço de qualquer
	// tipo de variavel

	// declara ponteiro generico
	void *pp;

	int *p1, p2 = 10;

	p1 = &p2;

	// recebe o endereço de um inteiro
	pp = &p2;
	printf("Endereço em pp(endereço de p2): %p\n",pp); // endereço de p2

	// recebe o endereço de um ponteiro para inteiro
	pp = &p1;
	printf("Endereço em pp(endereço do ponteiro p1): %p\n",pp); // endereço do ponteiro p1

	// recebe o endereço guardado em p1 (endereço de p2)
	pp = p1;
	printf("Endereço em pp(endereço de p2): %p\n",pp);

	return 0;

}