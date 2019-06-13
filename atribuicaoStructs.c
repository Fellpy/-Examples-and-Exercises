#include <stdio.h>
#include <stdlib.h>

/* pode-se fazer a operação
de atribuição entre duas variaveis de estrutura,
sendo que o valor de uma será copiado para outra.

isso é permitido somente se as estruturas forem a mesma,
ou seja, possuirem o mesmo nome.
*/

// declarando a estrutura ponto
struct ponto
{
	int x; 
	int y; 
};

// estrutura novo_ponto
struct novo_ponto
{
	int x; 
	int y; 
};

int main()
{	
	// declarando p1 e p2 do tipo estrutura e inicializando
	struct ponto p1,p2 = {1,2}; // x = 1 e y  = 2

	// p3 do tipo novo_ponto inicializado
	struct novo_ponto p3 = {3,4};

	// atribuindo p2 a p1
	/* o valor de p2.x é copiado a p1.x e o valor de p2.y
	é copiado para p1.y
	*/
	p1 = p2;
	printf("p1 = %d e %d\n",p1.x,p1.y); // p1 = 1 e 2

	// ERRO, tipos diferentes
	//p1 = p3;
	//printf("p1 = %d e %d\n",p1.x,p1.y);

	
	return 0;
}