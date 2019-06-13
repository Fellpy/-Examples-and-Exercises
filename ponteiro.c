#include <stdio.h>

int main(void)
{
	// ponteiro para inteiro
	int *a;


	int vari = 10;

	/* O ponteiro a recebe o endereço de memória
	da variavel vari */
	a = &vari;
	printf("Endereço do ponteiro: %d\n", a);
	printf("Valor do endereço apontado pelo ponteiro a: %d\n", *a);

	// altera o valor da variavel vari atraves do ponteiro
	*a = 15;
	printf("Valor da variavel alterado atraves do ponteiro: %d\n", vari);
	printf("Endereço do ponteiro: %p\n", a);

	return 0;
}