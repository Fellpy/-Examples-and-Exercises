#include <stdio.h>
#include <stdlib.h>

// declarando a estrutura
struct cadastro
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main()
{
	/* arrays de estruturas

	com o uso de arrays de estrutura
	pode-se de forma mais prática
	manipular as variaveis da estrutura.

	e com comandos de repetição, pode-se
	executar uma mesma tarefa para 
	diferentes posições do array
	*/

	// declarando uma variavel do tipo estrutura
	struct cadastro c[4]; // do mesmo jeito que (struct estrutura c1,c2,c3,c4;)
	int i;
	for(i = 0; i < 4; i++)
	{
		fgets(c[i].nome,50,stdin);
		scanf("%d",&c[i].idade);
		fgets(c[i].rua,50,stdin);
		scanf("%d",&c[i].numero);
	}

	return 0;
}