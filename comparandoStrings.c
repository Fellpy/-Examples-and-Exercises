#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* Usando a função strcmp() para comparar
	duas strings.

	strcmp() compara posição a posição de duas strings
	e retorna o valor ZERO se forem iguais ou o valor 1
	se foram diferentes.

	strcmp() é case-sensitive, letras maiuscula e minusculas
	tornam as strings diferentes.
	*/

	// declarando o vetor de Strings
	char str1[100], str2[100];

	printf("Entre com uma String: ");
	
	// lendo a str1
	fgets(str1,100,stdin);

	printf("Entre com outra String: ");

	// lendo a str2
	fgets(str2,100,stdin);

	// realizando a comparação entre as duas strings
	if(strcmp(str1,str2) == 0)
		printf("String iguais\n");
	else 
		printf("Strings diferentes\n");

	return 0;
}