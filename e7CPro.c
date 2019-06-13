#include <stdio.h>

/* Exercicios C Progressivo

7. Tabela de notas - Escreva um programa que produza a seguinte saída na tela:

ALUNO(A)          NOTA
=========         =====
ALINE              9.0  
MÁRIO              DEZ
SÉRGIO             4.5    
SHIRLEY            7.0
*/

// notas dos quatro alunos
typedef struct 
{
	float nota;
} nota;

// nome dos quatro alunos
typedef struct
{
	char nomeAluno[10];
} aluno;

int main()
{
	nota nota[4];
	aluno aluno[4];

	printf("Informe o nome dos alunos e suas notas:\n");
	for(int i = 0;i < 4; ++i)
	{
		printf("Nome: ");
		scanf("%s",aluno[i].nomeAluno); // le o nome do aluno sem o "\n"
		printf("Nota:");
		scanf("%f",&nota[i].nota); // le a nota do aluno
		setbuf(stdin,NULL); // limpando buffer entupido do scanf()
	}

	printf("\nALUNO(A)     NOTA\n");	
	printf("========     =====\n");

	printf("%s           %.2f\n",aluno[0].nomeAluno,nota[0].nota);
	printf("%s           %.2f\n",aluno[1].nomeAluno,nota[1].nota);
	printf("%s           %.2f\n",aluno[2].nomeAluno,nota[2].nota);
	printf("%s           %.2f\n",aluno[3].nomeAluno,nota[3].nota);
	return 0;
}