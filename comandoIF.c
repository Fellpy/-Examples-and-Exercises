#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* o comando if serve para avaliar 
	uma expressao e executar um determinado comando
	ou desviar o fluxo do programa para outra parte
	a partir da avaliação de condições.
	
	A mensagem de que o número é maior do que 10
	será exibida apenas se a condição for verdadeira. Se a condição for falsa,
	nenhuma mensagem será escrita na tela.
	*/
	int num;
	printf("Digite um numero:\n");
	scanf("%d",&num);
	if (num > 10){
		printf("O numero e maior do que 10\n");
	}
}