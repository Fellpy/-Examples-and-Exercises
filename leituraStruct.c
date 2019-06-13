#include <stdio.h>
#include <stdlib.h>

// lendo do teclado as variaveis da estrutura

// declarando a estrutura

struct cadastro
{
	char nome[50];
	int idade;
	char rua[50];
	int numero;
} cad ; // declarando a variavel da que representa a estrutura

int main()
{

	// le do teclado uma string e armazena no campo nome
	printf("Digite o seu nome completo: ");
	fgets(cad.nome,50,stdin);

	// le do teclado um valor inteiro e armazena no campo idade
	printf("Digite a sua idade: ");
	scanf("%d",&cad.idade);

	setbuf(stdin,NULL); // limpando o buffer do teclado

	// le do teclado uma string e armazena no campo rua
	printf("Digite o nome da sua rua: ");
	fgets(cad.rua,50,stdin);

	// le do teclado um valor inteiro e armazena no campo numero
	printf("Digite o numero da sua rua: ");
	scanf("%d",&cad.numero);

	return 0;
}