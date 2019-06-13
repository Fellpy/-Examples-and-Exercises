#include <stdio.h>
#include <stdlib.h>

struct endereco
{
	char rua[50];
	int numero;
};

struct cadastro
{
	char nome[50];
	int idade;
	struct endereco ender;
};

int main()
{
	struct cadastro c;

	// le do teclado uma string e armazena no campo nome
	printf("Nome:\n");
	fgets(c.nome,50,stdin);

	// le do teclado uma valor inteiro e armazena no campo idade
	printf("Idade:\n");
	scanf("%d",&c.idade);

	setbuf(stdin,NULL); // limpa o buffer do teclado

	// le do teclado uma string
	// e armazena no campo rua da variavel ender
	printf("Nome da rua:\n");
	fgets(c.ender.rua,50,stdin);


	// le do teclado uma valor inteiro
	// e armazena no campo numero da variavel ender
	printf("Numero:\n");
	scanf("%d",&c.ender.numero);

	return 0;
}