#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	int vet[5] = {1,2,3,4,5};
	int *p, indice = 2;
	p = vet; // p = vet[0];

	// vet[0] é equivalente a *p;
	printf("%d\n",*p); // 1
	printf("%d\n",vet[0]); // 1

	// vet[indice] é equivalente
	// a *(p + indice)
	printf("%d\n",vet[indice]); // 3
	printf("%d\n", *(p + indice)); // 3

	// vet é equivalente a &vet[0] somente em uma atribuição a um ponteiro
	printf("%d\n",vet); // endereço de onde o array começa na memoria
	printf("%d\n",&vet[0]); // endereço de onde o array começa na memória

	// &vet[indice] é equivalente a (vet + indice)
	printf("%d\n", &vet[indice]); // endereço do valor 3
	printf("%d\n", (vet + indice)); // endereço do valor 3

	return 0;
}