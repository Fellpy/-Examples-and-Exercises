#include <stdio.h>
#include <stdlib.h>

/* Exercicios C Progressivo

5. Ao mestre - Escreva um bilhete ao seu professor, informando seus objetivos nesta disciplina e o
que espera dela e do professor. Implemente um programa que mostra seu bilhete na tela.
*/

int main()
{
	char mensagem[] = {"Eai prof blz?\nMeus objetivos nessa disciplina e aprender o maximo possivel de C "};
	char mensagem2[] = {"para que no futuro quem sabe eu crie um sistema operacional."};

	printf("%s%s\n",mensagem,mensagem2);

	return 0;
}