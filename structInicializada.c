#include <stdio.h>
#include <stdlib.h>

// inicializando estruturas

// declarando a estrutura
struct cadastro
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
	char pais[50];
	char letra;
};


int main()
{
	// declarando a variavel do tipo estrutura e inicializando
	struct cadastro cad = {"Felipe",23,"Avenida Brasil",10,"Brasil",'C'};

	// cria uma nova variavel do tipo estrutura, inicializada
	struct cadastro cad2 = {"Joao",26,"Areal",50,"Brasil",'J'};

	fputs(cad.nome,stdout);; // nome
	printf("\n");
	printf("%d\n",cad.idade); // idade
	fputs(cad.rua,stdout); // rua
	printf("\n");
	
	// imprime um único char
	putchar(cad.letra); // C

	printf("\n");
	printf("--------------------------\n");

	// imprime os dados de cad2
	fputs(cad2.nome,stdout); // nome
	printf("\n");

	printf("%d\n",cad2.idade); // idade

	putchar(cad2.letra);	
	printf("\n");

	return 0;
}