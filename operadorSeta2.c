#include <stdio.h>
#include <stdlib.h>

// operador seta

/* o operador seta (->)
permite acessar o valor dos
campos de uma estrutura fora da função.

Ela substitui o uso do operador asterisco " * " e 
do operador ponto para acessar o valor de um campo
dentro de uma função quando é passado uma estrutura
como parametro de referencia.
*/

// estrutura
struct ponto
{
	int x, y;
};

void func(struct ponto *p)
{
	// uso do operador seta para acessar os campos da estrutura ponto
	p->x = 10;
	p->y = 20;
}

int main()
{
	struct ponto p1;
	func(&p1);
	printf("x = %d\n",p1.x);
	printf("y = %d\n",p1.y);

	return 0;
}