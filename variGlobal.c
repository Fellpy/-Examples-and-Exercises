#include <stdio.h>
#include <stdlib.h>

// declarando uma variavel global
/* variaveis globais podem ser acessadas e alteradas em qualquer 
parte do programa, e seu tempo de vida é o tempo de execução do programa.
*/
int x = 5; // vari global

void incr()
{
	// escopo local //
	x++; // acesso a variavel global
	// fim do escopo local //
}

int main()
{
	// escopo local //
	printf("x = %d\n",x); // acesso a variável global
	incr(); // invoca a função incr e incrementa mais 1 a vari x

	// imprime o valor incrementado da vari x
	printf("x = %d\n",x); // acesso a variável global

	return 0;
	// fim do escopo local //
}