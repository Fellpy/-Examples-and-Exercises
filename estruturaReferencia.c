#include <stdio.h>
#include <stdlib.h>

/* para passar estruturas por referencia
basta colocar o operador " * " antes da
declaração da variavel do tipo estrutura
no parametro da função e quando for acessar
os campos da estrutura dentro da função
usar parenteses na variavel campo.
*/

// declara a estrutura
struct ponto
{
	int x, y;
};

// declara uma função que recebe uma estrutura por 
// referencia

void atribui(struct ponto *p) // referencia para a estrutura " *p "
{
	// acessando os campos da estrutura
	(*p).x = 10; // uso dos parenteses para acesso dos campos
	(*p).y = 20;
}

int main()
{
	struct ponto p1;
	atribui(&p1);
	printf("x = %d\n",p1.x);
	printf("y = %d\n",p1.y);

	return 0;
}