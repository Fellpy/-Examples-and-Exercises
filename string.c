#include <stdio.h>
#include <string.h>

void main(void)
{

	char nome[40] = "Pacifico pacato cordeiro manso";

	printf("[%s]\n", nome);
	printf("[%d]\n", sizeof(nome));
	nome[0] = NULL; // Limpa o conteúdo da variavel
	printf("[%s]\n", nome);
	// sizeof() mostra o tamanho reservado para a string(40)
	printf("[%d]\n", sizeof(nome));
}