#include <stdio.h>

/* Exercicios C Progressivo

4. Programa em C que calcula a média das notas de uma turma
Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
Em seguida, através de um laço while, pede ao usuário para que entre 
com as notas de todos os alunos da sala, um por vez.
*/

int main(void)
{
	float notas, soma;
	int n = 1, alunos;

	// pergunta quantos alunos tem na sala
	printf("Quantos alunos ha na sala: ");
	scanf("%d", &alunos);

	
	printf("Informe as notas dos %d alunos:\n",alunos);

	// faz a leitura das notas
	while(n <= alunos)
	{
		printf("Aluno %d: ",n);
		scanf("%f", &notas);
		soma = soma + notas;
		n++;
	}

	float media = soma / alunos;

	printf("Media: %f\n",media);

	return 0;
}