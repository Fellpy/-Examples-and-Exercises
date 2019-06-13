#include <stdio.h>
#include <string.h>

/*
Acessar um vetor como ponteiro e vice-versa é muito comum quando são utili-
zadas strings. Quando é definido um vetor de caracteres, pode-se acessar o
mesmo através de um ponteiro para caractere. Este ponteiro estará sempre
apontando para um único caractere da string e através de operações sobre o
ponteiro (incremento ou decremento) pode-se caminhar no vetor.
*/

int main(void)
{
	char nome[30] = "Marcos Aurélio";
	char *pt;

	// Aponta para o primeiro caractere da string/vetor
	// typecast de ponteiro (char *)
	pt = (char *)&nome;


	// Pega o tamanho da variavel na memória e não o tamanho da matriz
	printf("Tamanho da string: %d\n", sizeof(nome));
	printf("Endereço da primeira posição: %p\n", pt);
	printf("Conteudo da primeira posicao do vetor: %c\n", *pt);
	
	printf("tamanho de nome: %d\n", strlen(nome)); // considerando '\0' como 15

	if (pt == &nome[0])
	{
		printf("Realmente é o endereço da primeira posicao da string nome\n");
	}

	printf("\n");

	while(*pt != '\0')
	{
		// equivalente a vet[i]
		//i++:
		putchar(*pt);
		pt++;
	}
	printf("\n");

	printf("Endereço da última posição = %p\n", pt);

	printf("\n");

	if (pt == &nome[15])
	{
		// a última posição considerada é o caracter de nulo -> '\0'
		printf("Realmente é endereço da ultima posição da string nome\n");
	}

	return 0;
}