#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* A atribuição de variaveis 
do tipo de estrutura também é valida
quando se usa array de estrutura.

atribuição em forma de variavel:
p1 = p2;

atribuição em forma de array:
c[1] = c[2];

tanto os dois modos são validos para atribuição
de valores, se as estruturas forem as mesmas,
ou seja, possuirem o mesmo nome.

variaveis da estrutura cadastro so atribuem a outras variaveis da estrutura cadastro
do mesmo modo na estrutura novo.
*/

struct cadastro
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

struct novo
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main()
{
	struct cadastro c[10];

	// correto
	c[1] = c[2]; // atribui os valores de c[2] para c[1]

	printf("c[1] = %s%d%d\n",c[1].nome,c[1].idade,c[1].numero);


	struct novo n[10];

	// ERRADO
	//c[1] = n[1];

	return 0;
}