#include <stdio.h>
#include <stdlib.h>

int main()
{
	// simulando o switch-case com if-else aninhandos
	char ch;
	printf("Digite um simbolo: ");
	ch = getchar(); // faz a leitura de um caracter e armazena na vari ch

	if(ch == '.')
		printf("Ponto.\n");
	else
		if(ch == ',')
			printf("Virgula\n");
		else 
			if (ch == ':')
				printf("Dois pontos\n");
			else 
				if (ch == ';')
			        printf("Ponto virgula\n");
			        else 
			        	printf("Nao e pontuacao!\n");

	return 0;

}