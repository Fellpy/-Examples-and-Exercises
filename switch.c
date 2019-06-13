#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* lê um caracter digitado pelo usuário e informa
	se o mesmo é um simbolo de pontuação,
	com o comando switch-case
	*/

	char ch;
	printf("Digite um simbolo de pontuacao: ");
	ch = getchar();
	switch(ch){
		case '.': printf("Ponto.\n"); break;
		case ',': printf("Virgula\n");break;
		case ':': printf("Dois pontos\n"); break;
		case ';': printf("Ponto e virgula\n"); break;
		default : printf("Nao e pontuacao!\n");
	}
	
	return 0;
}