#include <stdio.h>

/* Exercicios C Progressivo

Desafio 3. Crie um programa em C que recebe uma nota (entre 0.0 e 10.0) e 
checa se você passou direto, ficou de recuperação ou foi reprovado na matéria.

A regra é a seguinte:
Nota 7 ou mais: passou direto
Entre 4 e 7: tem direito de fazer uma prova de recuperação
Abaixo de 4: reprovado direto
*/

int main(void)
{
	// nota
	float nota;

	// faz a leitura da nota
	printf("Informe uma nota entre[0.0 e 10.0]: ");
	scanf("%f", &nota);

	// checa se tirou 7 ou mais
	if(nota >= 7.0)
	{
		printf("Passou direto!\n");
	}

	// checa se tirou entre 4.0 e 6.99
	if (nota >=4 && nota <= 6.99)
	{
		printf("Direito a recuperacao!\n");
	}

	// checa se tirou menos 4.0
	if (nota <= 3.99)
	{
		printf("Reprovado direto!\n");
	}

	return 0;

}