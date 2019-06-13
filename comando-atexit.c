#include <stdio.h>
#include <stdlib.h> // nescessária para o atexti()

// Registro de funções com o comando atexit()
// funções exit handlers, funções executadas depois do termino
// de um processo. As funções são executadas do inverso ao
// seu registro

void saindo1(void)
{
	printf("\nFinalizando 1");
}

void saindo2(void)
{
	printf("\nFinalizando 2");
}

void enderecos(void);

int main(void)
{
	printf("\nRegistrando funções..");
	
	// funções que serão executadas antes do término do programa
	atexit(saindo1);
	atexit(saindo2);

	printf("No meio do programa...\n");
	exit(0);
}

void enderecos(void)
{
	int *p;

	// ponteiro para p
	int **ptr_p = &p;

	// ponteiro para o ponteiro ptr_p
	int ***ptr_ptr_p = &ptr_p;

	// ponteiro para o ponteiro ptr_ptr_p
	int ****ptr_ptr_ptr_p = &ptr_ptr_p;

	// ponteiro para o ponteiro ptr_ptr_ptr_p
	int *****ptr_ppp_p = &ptr_ptr_ptr_p;

	printf("\n");
	printf("\n");
	printf("Endereço do primeiro ponteiro p: %p\n", p);
	printf("Endereço do ponteiro p apontado pelo ponteiro ptr_p: %p\n", *ptr_p);

	printf("Endereço do ponteiro ptr_p ");
	printf("apontado pelo ponteiro ptr_ptr_p: %p\n", *ptr_ptr_p);
	
	printf("Endereço do ponteiro ptr_ptr_p ");
	printf("apontado pelo ponteiro ptr_ptr_ptr_p: %p\n",*ptr_ptr_ptr_p);

	printf("Endereço do ponteiro ptr_ptr_ptr_p ");
	printf("apontado pelo ponteiro ptr_ppp_p: %p\n", *ptr_ppp_p);
}
