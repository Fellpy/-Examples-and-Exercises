#include <stdio.h>
#include <stdlib.h>

/* Exercicios C Progressivo

5. Escreva um programa que pergunte o dia, 
mês e ano do aniversário de uma pessoa e diga se a data é válida ou não. 
Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.
*/

int main(void)
{
	int dia, mes, ano;

	// faz a leitura do dia, mes e ano do usuario
	printf("Informe o dia do seu nascimento(ex: 19,4,15...): ");
	scanf("%d",&dia);

	printf("Informe o numero do mes que voce nasceu(ex: 1 = JAN, 2 = FEV...): ");
	scanf("%d",&mes);

	printf("Informe o ano em que voce nasceu(ex: 1990,1992,2013...): ");
	scanf("%d",&ano);

	// verifica se o dia é valido
	if (dia >= 1 && dia <= 30)
	{
		printf("Dia informado correto.\n");
	}
	else
	{
		printf("O dia informado tem formato incorreto ao definido ou excedeu o limite!\n");
		system("exit");
	}

	// verifica se o mes é valido
	if (mes >= 1 && mes <= 12)
	{
		printf("Mes informado correto.\n");
	}
	else
	{
		printf("O mes informado tem formato incorreto ao definido ou excedeu o limite!\n");
		system("exit");
	}

	// verifica se o ano é valido a partir de 1990 a 2005
	if (ano >= 1990 && ano <= 2013)
	{
		printf("Ano informado correto.\n");
	}
	else
	{
		printf("Ano informado tem formato incorreto ao definido ou excedeu o limite!\n");
		system("exit");
	}

	printf("\nVoce nasceu no dia: %d do mes: %d do ano de: %d\n",dia,mes,ano);

	return 0;
}