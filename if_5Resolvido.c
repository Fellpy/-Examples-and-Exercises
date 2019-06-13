#include <stdio.h>

// dias 1 ate 31
#define diaLimite 1
#define diaLimite_ 31

// mes 1 ate 12
#define mesLimite 1
#define mesLimite_ 12

// limite até o ano 2013
#define limiteAno 2013

/* Exercicios C Progressivo Resolvidos

5. Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e 
diga se a data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os meses tem 31 
dias e que estejamos no ano de 2013.
*/

int main(void)
{
	int dia, mes, ano;

	// leitura dia
	printf("Dia: ");
	scanf("%d", &dia);

	// leitura mes
	printf("Mes: ");
	scanf("%d", &mes);

	// leitura ano
	printf("Ano: ");
	scanf("%d",&ano);

	// condições
	if ( (dia < diaLimite) || (dia > diaLimite_))
		printf("Dia invalido!\n");
	else // se o dia for válido
		if((mes < mesLimite) || (mes > mesLimite_))
			printf("Mes invalido!\n");
		else // além do dia, mês for válido
			if(ano > limiteAno)
				printf("Ano invalido!\n");
			else // se além do dia e mês, o ano for válido
				printf("Data valida!\n");

	return 0;
}