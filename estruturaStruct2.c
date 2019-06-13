#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// trabalhando com struct

// declarando uma estrutura, no escopo global
struct cadastro
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main()
{

	// declarando uma variavel do tipo cadastro
	struct cadastro c;

	// Atribui a string "Carlos" para o campo nome
	strcpy(c.nome,"Carlos");

	// Atribui o valor de 18 para o campo idade
	c.idade = 18;

	// Atribui a string "Avenida Brasil" para o campo rua
	strcpy(c.rua,"Avenida Brasil");

	// Atribui o valor 1082 para o campo numero
	c.numero = 1082;

	// exibindo o campo nome
	fputs(c.nome,stdout);
	printf("\n");
	return 0;
}