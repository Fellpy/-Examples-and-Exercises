#include <stdio.h>
#include <stdlib.h>

/* se uma função nao tiver a 
palavra void ela pode retornar um valor
para a função main(), atraves do comando
return.

uma função com retorno pode retornar valores,
expressoes, variaveis e até outras funções.

a função tem que retornar uma expressao que seja
compativel com o tipo declarando para a função.

uma função pode ter mais de uma declaração return.
*/

// declarando uma função com retorno inteiro
int soma(int x, int y)
{
	return x + y; // retorna a soma dos parametros x e y para a função main()
}

int main()
{
	int a,b;
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("Digite o valor de b: ");
	scanf("%d",&b);
	printf("Soma = %d\n",soma(a,b));

	return 0;
}