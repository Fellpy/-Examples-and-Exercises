#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* uma estrutura pode conter outra
estrutura dentro dela ou uma declaração
de uma variavel de estrutura.

Estruturas Aninhadas
*/

struct endereco
{
	char rua[50];
	int numero;
};

struct cadastro
{
	char nome[50];
	int idade;

	// declarando a variavel do tipo estrutura endereco
	struct endereco ender;
} cad;

int main()
{	
	// lendo rua de endereco
	fgets(cad.ender.rua,50,stdin); //fgets() le o elemento "\0" também

	// lendo numero de endereco
	scanf("%d",&cad.ender.numero);

	// exibindo os valores da estrutura endereco atraves da estrutura cadastro
	printf("%s%d\n",cad.ender.rua,cad.ender.numero);

	return 0;
}