#include <stdio.h>
#include <stdlib.h>

// ponteiro para ponteiro

// um ponteiro pode armazenar o endereço que outro ponteiro
// armazena ou o endereço do proprio ponteiro

int main(void)
{
	int x = 10;
	int *p = &x;
	int **p2 = &p;

	// Endereço em p2
	printf("Endereço em p2 = %p\n",p2); // Endereço de p

	// Conteúdo do endereço em *p2
	printf("Conteúdo em *p2 = %p\n", *p2); // Endereço de x q esta dentro de p

	// Conteúdo do endereço do endereço **p2
	printf("Conteúdo em **p2 = %d\n", **p2); // exibe o valor de x

	return 0;
}