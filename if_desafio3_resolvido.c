#include <stdio.h>

/* Exercicios C Progressivo Desafio Resolvido

Crie um programa em C que recebe uma nota (entre 0.0 e 10.0) e 
checa se você passou direto, ficou de recuperação ou foi reprovado na matéria.

A regra é a seguinte:
Nota 7 ou mais: passou direto
Entre 4 e 7: tem direito de fazer uma prova de recuperação
Abaixo de 4: reprovado direto
*/

int main(void)
{
	float nota; // armazena a nota

	printf("Digite sua nota[0.0 - 10.0]: ");
	scanf("%f",&nota);

	// checa se a nota é maior que 0.0 e menor que 10.0
	if ((nota <= 10.0) && (nota >= 0.0))
	{
		// checa se a nota é maior do que 7.0
		if (nota >= 7.0)
		{
			printf("Parabens, voce passou direto. Voce deve ser programador C!\n");
		}
		else
		{
			if (nota >= 4.0)
			{
				printf("Voce vai para a recuperacao!\n");
			}
			else
			{
				printf("Reprovado. Estude C e voce ficara mais inteligente!\n");
			}
		}
	}

	else
	{
		printf("Nota invalida, fechando o programa C!\n");
	}

	return 0;
}