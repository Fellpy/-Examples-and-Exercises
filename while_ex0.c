#include <stdio.h>

/*
0. Programa em C dos patinhos da Xuxa
Xuxa, a rainha dos baixinhos, criou uma música que tem o segunte formato:

n patinhos foram passear
Além das montanhas
Para brincar
A mamãe gritou: Quá, quá, quá, quá
Mas só n-1 patinhos voltaram de lá.

Que se repete até nenhum patinho voltar de lá.
Ao final, todos os patinhos voltam:

A mamãe patinha foi procurar
Além das montanhas
Na beira do mar
A mamãe gritou: Quá, quá, quá, quá
E os n patinhos voltaram de lá.

Crie um programa em C que recebe um inteiro positivo 
do usuário e exibe a música inteira na tela, onde o inteiro recebido 
representa o número inicial n de patinhos que foram passear.
*/

int main(void)
{
	// patinhos
	int patinhos, count;

	printf("Informe o numero de patinhos que foram passear: ");
	scanf("%d", &patinhos);

	count = patinhos;
	while(count > 1)
	{
		printf("%d patinhos foram passear\n",count);
		printf("Alem das montanhas\n");
		printf("Para brincar\n");
		printf("A mamae gritou: qua, qua, qua, qua\n");
		printf("Mas so %d patinhos voltaram de la.\n",count - 1);

		count--;
	}

	printf("\n1 patinho foi passear\n");
	printf("Alem das montanhas\n");
	printf("Para brincar\n");
	printf("A mamae gritou: qua, qua, qua, qua\n");
	printf("Mas nenhum patinho voltou de la.\n");

	printf("\nA mamae patinha foi procurar\n");
	printf("Alem das montanhas\n");
	printf("Na beira do mar\n");
	printf("A mamae gritou: qua, qua, qua, qua\n");
	printf("E os %d patinhos voltaram de la.\n", patinhos);

	return 0;
}