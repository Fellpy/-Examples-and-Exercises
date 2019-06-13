#include <stdio.h>
#include <string.h>

void main(void)
{
	char frase[100];
	int tamanho;

	printf("Entre com uma frase: ");
	gets(frase);

	// pega o tamanho da string frase digitada e armazena em tamanho
	tamanho = strlen(frase);

	printf("A frase possuí %d caracteres\n", tamanho);

	// tamanho reservado para a frase
	printf("A variavel tem tamanho %d\n", sizeof(frase));
}