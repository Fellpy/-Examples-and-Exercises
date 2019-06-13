#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* o comando struct tem a capacidade
de criar um novo tipo de dado atráves
de outras dados dentro dele.

o struct é uma estrutura que contem membros(variaveis)
que podem ser de qualquer ou do mesmo tipo.

struct basicamente é criar um novo tipo de dado
que contenha varios membros.

a vantagem principal do comando struct é agrupar
de forma organizada varios tipos de dados diferentes
dentro de uma unica variavel

em resumo struct é uma variavel que contem dentro de sí
outras variaveis.
*/

// struct geralmente sao declaradas no escopo global do
// do programa para que o mesmo tenha acesso a estrutura


// declarando uma struct que representa o cadastro de uma pessoa

struct cadastro
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

// estruturas diferente podem ter os membros com nomes iguais

struct Aluno
{
	char nome[50];
	int matricula;
	float nota1,nota2,nota3;
};


/* ao definir uma estrutura struct
logo em seguida pode-se declarar variaveis
do tipo da estrutura
*/
struct cadastro2
{
	char nome[50];
	float peso;

}cad1,cad2; // cad1,cad2 sao variaveis declaradas do tipo da estrutura cadastro2

// outra forma de criar variaveis do tipo da estrutura
struct cadastro2 c1,c2,c3,c4;

int main()
{
	printf("Estruturas Struct!\n");

	return 0;
}


