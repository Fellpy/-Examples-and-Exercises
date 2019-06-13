#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p, *p1, x , y;
	p = &x;
	p1 = &y;

	/* Os operadores relacionais: >, < , >= e <= são usados para
	saber se um ponteiros aponta para uma posição a frente ou atrás
	de outro ponteiro */

	// verifica está a frente de p1
	if (p > p1)
	{
		printf("O ponteiro p aponta para uma posição a frente de p1\n");
	}
	else
	{
		printf("O ponteiro p NAO aponta para uma posição a frente de p1\n");
	}

	return 0;
}