#include <stdio.h>

int main(void)
{
	int *pt_int;
	int ivalor;
	char *pt_char;
	char cvalor;

	pt_int  = &ivalor;
	pt_char = &cvalor;

	printf("Endereco de pt_int = %p\n", pt_int);
	printf("Endereco de pt_char = %p\n", pt_char);

	// adicionando uma unidade aos ponteiros
	pt_int++;
	pt_char++;

	printf("Endereco de pt_int: %p\n", pt_int);
	printf("Endereco de pt_char: %p\n", pt_char);

	return 0;
}