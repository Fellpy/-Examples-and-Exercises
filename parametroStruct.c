#include <stdio.h>
#include <stdlib.h>

/*

Passagem de estruturas por valor

estrutura como parâmetro da função


é possível passar structs inteiras
ou campos especificos de uma struct
como parametro de uma função.

Para isso basta declarar na lista
de parametros da função um parametro
que seja do tipo da estrutura.

Dessa forma é possivel ter acesso a todos
os campos da estrutura.
*/

// é nescessário criar antes a estrutura
struct ponto
{
	int x, y;
};

// declarando a função que vai receber um parametro da estrutura
void imprime(struct ponto p){ // vai receber o valor de uma variavel do tipo estrutura ponto

	// imprime os valores dos campos da estrutura
	// quando a estrutura for inicializada na main()
	printf("x = %d\n",p.x);
	printf("y = %d\n",p.y);
}

int main()
{
	struct ponto p1 = {10,20}; // inicializando os valores x e y 
	/* passando parametro do tipo struct por valor
	para a função imprime() */
	imprime(p1);

	return 0;
}