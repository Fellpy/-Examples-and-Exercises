#include <stdio.h>
#include <string.h>

/*
A função strtok devolve um ponteiro para a próxima palavra na string apon-
tada por endereçoStr1 . Os caracteres que formam a string apontada por en-
dereçoStr2 são os delimitadores que terminam a palavra. Um ponteiro nulo é
devolvido quando não há mais palavras na string.

Na primeira chamada à função strtok, o endereçoStr1 é realmente utilizado
na chamada. Nas chamadas seguintes deve-se usar um ponteiro nulo como
primeiro argumento.

Pode-se utilizar um conjunto diferente de delimitadores para cada chamada à
strtok .
*/

int main(void)
{
	char *p;
	char frase[] = "Mario Quintana, o maior poeta gaucho";

	printf("Frase = %s\n", frase);

	// Primeira pesquisa por espaço em branco
	p = strtok(frase, " ");

	printf("P = %s\n",p);

	// modifica a string frase
	printf("Frase = %s\n", frase);

	do 
	{
		/* Nas proximas chamadas deve passar um ponteiro nulo '\0'
		para indicar a função para continuar a pesquisa no ponteiro
		anterior */
		p = strtok('\0', ", ");
		if(p) // um valor NULL é considerado sempre falso em operações booleanas
		{
			printf("P = %s\n",p);
		}
	}while(p);

	return 0;
}