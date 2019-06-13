#include <stdio.h>
#include <stdlib.h>

/* Há casos em que não é nescessário
passar todos os valores de uma estrutura
para uma função. Nesse caso pode-se usar
valores específicos da estrutura dentro de uma 
função se o parametro da função for compativel
com o campo da estrutura definida.
*/

// declarando a estrutura
struct ponto
{
	int x , y;
};

// parametro int x tem q ser compatível com a 
// variavel int x da estrutura se tratando do tipo e nao do mesmo nome
void imprime_valor(int x){
	printf("Valor = %d\n",x);
}

int main()
{
	struct ponto p1 = {10,20};
	imprime_valor(p1.x);
	imprime_valor(p1.y);

	return 0;
}