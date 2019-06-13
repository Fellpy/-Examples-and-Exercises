#include <stdio.h>
#include <stdlib.h>

/* Exercicios C Progressivo

2. Etiqueta - Elabore um programa que pede seu nome,
endereço, CEP e telefone. 
Ele deve imprirmir seu nome completo na primeira linha, 
seu endereço na segunda, e o CEP e telefone na terceira.
*/

int main()
{
	char nome[30];
	char endereco[30];
	char CEP[20];
	char telefone[15];

	printf("Informe o seu nome completo: ");
	fgets(nome,30,stdin);

	printf("Informe o seu endereco: ");
	fgets(endereco,30,stdin);

	printf("Informe o seu CEP: ");
	fgets(CEP,20,stdin);

	printf("Informe o seu telefone: ");
	fgets(telefone,15,stdin);

	printf("\nDados:");
	printf("\nNome completo: %s",nome);
	printf("Endereco: %s",endereco);
	printf("CEP:%sTelefone: %s",CEP,telefone);

	return 0;
}